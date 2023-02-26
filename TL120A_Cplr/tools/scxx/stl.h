// stl.h supplemental header
#ifndef _STL_H_
#define _STL_H_
#include <algorithm>
#include <deque>
#include <functional>
#include <iterator>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <utility>
#include <vector>

 #if _HAS_NAMESPACE
namespace std {}
using namespace std;
 #endif /* _HAS_NAMESPACE */

#if defined(__GHS_PRAGMAS)
#pragma ghs startdata
#endif
#if defined(__ghs) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
		// TEMPLATE CLASS Deque
template<class _Ty>
	class Deque
		: public deque<_Ty, allocator<_Ty> >
	{	// wrap new deque as old
public:
	typedef Deque<_Ty> _Myt;
	typedef allocator<_Ty> _Alloc;

#if defined(__ghs) || defined(__SC3__)
	typedef typename deque<_Ty, allocator<_Ty> >::size_type size_type;
#endif

	Deque()
		: deque<_Ty, _Alloc>()
		{	// construct empty deque
		}

	explicit Deque(size_type _Count)
		: deque<_Ty, _Alloc>(_Count, _Ty())
		{	// construct deque from _Count * _Ty()
		}

	Deque(size_type _Count, const _Ty& _Val)
		: deque<_Ty, _Alloc>(_Count, _Val)
		{	// construct deque from _Count * _Val
		}

#if defined(__ghs) || defined(__SC3__)
	typedef typename _Myt::const_iterator _Iter;
#else
	typedef const_iterator _Iter;
#endif

	Deque(_Iter _First, _Iter _Last)
		: deque<_Ty, _Alloc>(_First, _Last)
		{	// construct deque from [_First, _Last)
		}
	};

		// TEMPLATE CLASS List
template<class _Ty>
	class List
		: public list<_Ty, allocator<_Ty> >
	{	// wrap new list as old
public:
	typedef List<_Ty> _Myt;
	typedef allocator<_Ty> _Alloc;
#if defined(__ghs) || defined(__SC3__)
	typedef typename list<_Ty, allocator<_Ty> >::size_type size_type;
#endif

	List()
		: list<_Ty, _Alloc>()
		{	// construct empty list
		}

	explicit List(size_type _Count)
		: list<_Ty, _Alloc>(_Count, _Ty())
		{	// construct list from _Count * _Ty()
		}

	List(size_type _Count, const _Ty& _Val)
		: list<_Ty, _Alloc>(_Count, _Val)
		{	// construct list from _Count * _Val
		}

#if defined(__ghs) || defined(__SC3__)
	typedef typename _Myt::const_iterator _Iter;
#else
	typedef const_iterator _Iter;
#endif

	List(_Iter _First, _Iter _Last)
		: list<_Ty, _Alloc>(_First, _Last)
		{	// construct list from [_First, _Last)
		}
	};

		// TEMPLATE CLASS Map
template<class _Kty,
	class _Ty,
	class _Pr = less<_Kty> >
	class Map
		: public map<_Kty, _Ty, _Pr, allocator<_Ty> >
	{	// wrap new map as old
public:
	typedef Map<_Kty, _Ty, _Pr> _Myt;
	typedef allocator<_Ty> _Alloc;

	Map()
		: map<_Kty, _Ty, _Pr, _Alloc>(_Pr())
		{	// construct empty map from defaults
		}

	explicit Map(const _Pr& _Pred)
		: map<_Kty, _Ty, _Pr, _Alloc>(_Pred)
		{	// construct empty map from comparator
		}

#if defined(__ghs) || defined(__SC3__)
	typedef typename _Myt::const_iterator _Iter;
#else
	typedef const_iterator _Iter;
#endif

	Map(_Iter _First, _Iter _Last)
		: map<_Kty, _Ty, _Pr, _Alloc>(_First, _Last, _Pr())
		{	// construct map from [_First, _Last)
		}

	Map(_Iter _First, _Iter _Last, const _Pr& _Pred)
		: map<_Kty, _Ty, _Pr, _Alloc>(_First, _Last, _Pred)
		{	// construct map from [_First, _Last), comparator
		}
	};

		// TEMPLATE CLASS Multimap
template<class _Kty,
	class _Ty,
	class _Pr = less<_Kty> >
	class Multimap
		: public multimap<_Kty, _Ty, _Pr, allocator<_Ty> >
	{	// wrap new multimap as old
public:
	typedef Multimap<_Kty, _Ty, _Pr> _Myt;
	typedef allocator<_Ty> _Alloc;

	Multimap()
		: multimap<_Kty, _Ty, _Pr, _Alloc>(_Pr())
		{	// construct empty map from defaults
		}

	explicit Multimap(const _Pr& _Pred)
		: multimap<_Kty, _Ty, _Pr, _Alloc>(_Pred)
		{	// construct empty map from comparator
		}

#if defined(__ghs) || defined(__SC3__)
	typedef typename _Myt::const_iterator _Iter;
#else
	typedef const_iterator _Iter;
#endif

	Multimap(_Iter _First, _Iter _Last)
		: multimap<_Kty, _Ty, _Pr, _Alloc>(_First, _Last, _Pr())
		{	// construct map from [_First, _Last)
		}

	Multimap(_Iter _First, _Iter _Last, const _Pr& _Pred)
		: multimap<_Kty, _Ty, _Pr, _Alloc>(_First, _Last, _Pred)
		{	// construct map from [_First, _Last), comparator
		}
	};

		// TEMPLATE CLASS Set
template<class _Kty,
	class _Pr = less<_Kty> >
	class Set
		: public set<_Kty, _Pr, allocator<_Kty> >
	{	// wrap new set as old
public:
	typedef Set<_Kty, _Pr> _Myt;
	typedef allocator<_Kty> _Alloc;

	Set()
		: set<_Kty, _Pr, _Alloc>(_Pr())
		{	// construct empty set from defaults
		}

	explicit Set(const _Pr& _Pred)
		: set<_Kty, _Pr, _Alloc>(_Pred)
		{	// construct empty set from comparator
		}

#if defined(__ghs) || defined(__SC3__)
	typedef typename _Myt::const_iterator _Iter;
#else
	typedef const_iterator _Iter;
#endif

	Set(_Iter _First, _Iter _Last)
		: set<_Kty, _Pr, _Alloc>(_First, _Last, _Pr())
		{	// construct set from [_First, _Last)
		}

	Set(_Iter _First, _Iter _Last, const _Pr& _Pred)
		: set<_Kty, _Pr, _Alloc>(_First, _Last, _Pred)
		{	// construct set from [_First, _Last), comparator
		}
	};

		// TEMPLATE CLASS Multiset
template<class _Kty,
	class _Pr = less<_Kty> >
	class Multiset
		: public multiset<_Kty, _Pr, allocator<_Kty> >
	{	// wrap new multiset as old
public:
	typedef Multiset<_Kty, _Pr> _Myt;
	typedef allocator<_Kty> _Alloc;

	Multiset()
		: multiset<_Kty, _Pr, _Alloc>(_Pr())
		{	// construct empty set from defaults
		}

	explicit Multiset(const _Pr& _Pred)
		: multiset<_Kty, _Pr, _Alloc>(_Pred)
		{	// construct empty set from comparator
		}

#if defined(__ghs) || defined(__SC3__)
	typedef typename _Myt::const_iterator _Iter;
#else
	typedef const_iterator _Iter;
#endif

	Multiset(_Iter _First, _Iter _Last)
		: multiset<_Kty, _Pr, _Alloc>(_First, _Last, _Pr())
		{	// construct set from [_First, _Last)
		}

	Multiset(_Iter _First, _Iter _Last, const _Pr& _Pred)
		: multiset<_Kty, _Pr, _Alloc>(_First, _Last, _Pred)
		{	// construct set from [_First, _Last), comparator
		}
	};

		// TEMPLATE CLASS Vector
template<class _Ty>
	class Vector
		: public vector<_Ty, allocator<_Ty> >
	{	// wrap new vector as old
public:
	typedef Vector<_Ty> _Myt;
	typedef allocator<_Ty> _Alloc;
#if defined(__ghs) || defined(__SC3__)
	typedef typename vector<_Ty, allocator<_Ty> >::size_type size_type;
#endif

	Vector()
		: vector<_Ty, _Alloc>()
		{	// construct empty vector
		}

	explicit Vector(size_type _Count)
		: vector<_Ty, _Alloc>(_Count, _Ty())
		{	// construct vector from _Count * _Ty()
		}

	Vector(size_type _Count, const _Ty& _Val)
		: vector<_Ty, _Alloc>(_Count, _Val)
		{	// construct vector from _Count * _Val
		}

#if defined(__ghs) || defined(__SC3__)
	typedef typename _Myt::const_iterator _Iter;
#else
	typedef const_iterator _Iter;
#endif

	Vector(_Iter _First, _Iter _Last)
		: vector<_Ty, _Alloc>(_First, _Last)
		{	// construct vector from [_First, _Last)
		}
	};

		// CLASS bit_vector
typedef allocator<_Bool> _Bool_allocator;

// __ghs new code
#if !_HAS_TRADITIONAL_STL
//
class bit_vector
	: public vector<_Bool>
	{	// wrap new vector<bool> as old
public:
	typedef _Bool _Ty;
	typedef _Bool_allocator _Alloc;
	typedef bit_vector _Myt;

	bit_vector()
#if defined(__ghs) || defined(__SC3__)
		: vector<_Bool>()
#else
		: vector<_Bool, _Bool_allocator>()
#endif
		{	// construct empty vector
		}

	explicit bit_vector(size_type _Count, const _Ty& _Val = _Ty())
#if defined(__ghs) || defined(__SC3__)
		: vector<_Bool>(_Count, _Val)
#else
		: vector<_Bool, _Bool_allocator>(_Count, _Val)
#endif
		{	// construct vector from _Count * _Val
		}

	typedef const_iterator _Iter;

	bit_vector(_Iter _First, _Iter _Last)
		: vector<_Bool, _Bool_allocator>(_First, _Last)
		{	// construct vector from [_First, _Last)
		}
	};
// __ghs new code
#endif /* _HAS_TRADITIONAL_STL */
//

		// TEMPLATE CLASS priority_queue
template<class _Container,
	class _Pr = less<typename _Container::value_type> >
	class Priority_queue
		: public priority_queue<typename _Container::value_type,
			_Container, _Pr>
	{	// wrap new priority_queue as old
public:
	typedef typename _Container::value_type _Ty;

	Priority_queue()
		: priority_queue<_Ty, _Container, _Pr>(_Pr())
		{	// construct empty queue from defaults
		}

	explicit Priority_queue(const _Pr& _Pred)
		: priority_queue<_Ty, _Container, _Pr>(_Pred)
		{	// construct empty queue from comparator
		}

	typedef const _Ty *_Iter;

	Priority_queue(_Iter _First, _Iter _Last)
		: priority_queue<_Ty, _Container, _Pr>(_First, _Last, _Pr())
		{	// construct queue from [_First, _Last)
		}

	Priority_queue(_Iter _First, _Iter _Last, const _Pr& _Pred)
		: priority_queue<_Ty, _Container, _Pr>(_First, _Last, _Pred)
		{	// construct map from [_First, _Last), comparator
		}
	};

		// TEMPLATE CLASS queue
template<class _Container>
	class Queue
		: public queue<typename _Container::value_type, _Container>
	{	// wrap new queue as old
	};

		// TEMPLATE CLASS stack
template<class _Container>
	class Stack
		: public stack<typename _Container::value_type, _Container>
	{	// wrap new stack as old
	};
#if defined(__ghs) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif
#if defined(__GHS_PRAGMAS)
#pragma ghs enddata
#endif

		// MACRO DEFINITIONS
#define deque			Deque
#define list			List
#define map				Map
#define multimap		Multimap
#define set				Set
#define multiset		Multiset
#define vector			Vector
#define priority_queue	Priority_queue
#define queue			Queue
#define stack			Stack
#endif /* _STL_H_ */


/*
 * Copyright (c) 1992-2003 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V4.02:0324 */
