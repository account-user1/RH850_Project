/* Stub created for contract folders. Includes only what is required for QAC and polyspace */

#ifndef NVM_TYPES_H
#define NVM_TYPES_H


#ifndef NVM_REQ_OK
# define NVM_REQ_OK               (0u)  /* The last asynchronous request has been finished successfully */
#endif
#ifndef NVM_REQ_NOT_OK
# define NVM_REQ_NOT_OK           (1u)  /* The last asynchronous request has been finished unsuccessfully */
#endif
#ifndef NVM_REQ_PENDING
# define NVM_REQ_PENDING          (2u)  /* An asynchronous request is currently being processed */
#endif
#ifndef NVM_REQ_INTEGRITY_FAILED
# define NVM_REQ_INTEGRITY_FAILED (3u)  /* Result of the last NvM_ReadBlock or NvM_ReadAll is an integrity failure */
#endif
#ifndef NVM_REQ_BLOCK_SKIPPED
# define NVM_REQ_BLOCK_SKIPPED    (4u)  /* The referenced block was skipped during a multi block request */
#endif
#ifndef NVM_REQ_NV_INVALIDATED
# define NVM_REQ_NV_INVALIDATED   (5u)  /* The NV block is invalidated. */
#endif
#ifndef NVM_REQ_CANCELED
# define NVM_REQ_CANCELED        (6u)  /* A WriteAll was cancelled */
#endif
#ifndef NVM_REQ_REDUNDANCY_FAILED
# define NVM_REQ_REDUNDANCY_FAILED  (7u) /* A redundant block lost its redundancy */
#endif
#ifndef NVM_REQ_RESTORED_FROM_ROM
# define NVM_REQ_RESTORED_FROM_ROM  (8u) /* Default data from ROM are restored */
#endif

typedef uint16 NvM_BlockIdType;
typedef uint8 NvM_RequestResultType;
typedef uint8 NvM_ServiceIdType;


#endif
