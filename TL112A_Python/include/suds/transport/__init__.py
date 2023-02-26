# This program is free software; you can redistribute it and/or modify
# it under the terms of the (LGPL) GNU Lesser General Public License as
# published by the Free Software Foundation; either version 3 of the
# License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Library Lesser General Public License for more details at
# ( http://www.gnu.org/licenses/lgpl.html ).
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
# written by: Jeff Ortel ( jortel@redhat.com )

"""
Contains transport interface (classes).
"""

import email.parser


def decode_message(headers, raw_message):
    if headers['content-type'].startswith('multipart/'):
        raw_reply = str(headers) + raw_message
        parser = email.parser.Parser()
        decoded_reply = parser.parsestr(raw_reply)
        payload_parts = (part.get_payload()
                         for part in decoded_reply.get_payload())
        return ''.join(payload_parts)
    else:
        return raw_message

class TransportError(Exception):
    def __init__(self, reason, httpcode, fp=None, headers=None):
        Exception.__init__(self, reason)
        self.httpcode = httpcode
        self.fp = fp
        self.headers = headers

    def get_content(self): 
        if not hasattr(self, '_content'): 
            self._content = decode_message(self.headers, self.fp.read()) 
        return self._content

class Request:
    """
    A transport request
    @ivar url: The url for the request.
    @type url: str
    @ivar message: The message to be sent in a POST request.
    @type message: str
    @ivar headers: The http headers to be used for the request.
    @type headers: dict
    """

    def __init__(self, url, message=None):
        """
        @param url: The url for the request.
        @type url: str
        @param message: The (optional) message to be send in the request.
        @type message: str
        """
        self.url = url
        self.headers = {}
        self.message = message

    def __str__(self):
        s = []
        s.append('URL:%s' % self.url)
        s.append('HEADERS: %s' % self.headers)
        s.append('MESSAGE:')
        s.append(self.message)
        return '\n'.join(s)


class Reply:
    """
    A transport reply
    @ivar code: The http code returned.
    @type code: int
    @ivar message: The message decoded from the HTTP response.
    @type message: str
    @ivar headers: The undecoded message from the HTTP response.
    @type headers: dictstr
    @ivar headers: The http headers to be used for the request.
    @type headers: dict
    """

    def __init__(self, code, headers, message):
        """
        @param code: The http code returned.
        @type code: int
        @param headers: The http returned headers.
        @type headers: dict
        @param message: The (optional) reply message received.
        @type message: str
        """
        self.code = code
        self.headers = headers.dict
        self.raw_message = message
        self.message = decode_message(headers, self.raw_message)

    def __str__(self):
        s = []
        s.append('CODE: %s' % self.code)
        s.append('HEADERS: %s' % self.headers)
        s.append('MESSAGE:')
        s.append(self.message)
        return '\n'.join(s)


class Transport:
    """
    The transport I{interface}.
    """

    def __init__(self):
        """
        Constructor.
        """
        from suds.transport.options import Options
        self.options = Options()
        del Options

    def open(self, request):
        """
        Open the url in the specified request.
        @param request: A transport request.
        @type request: L{Request}
        @return: An input stream.
        @rtype: stream
        @raise TransportError: On all transport errors.
        """
        raise Exception('not-implemented')

    def send(self, request):
        """
        Send soap message.  Implementations are expected to handle:
            - proxies
            - I{http} headers
            - cookies
            - sending message
            - brokering exceptions into L{TransportError}
        @param request: A transport request.
        @type request: L{Request}
        @return: The reply
        @rtype: L{Reply}
        @raise TransportError: On all transport errors.
        """
        raise Exception('not-implemented')
