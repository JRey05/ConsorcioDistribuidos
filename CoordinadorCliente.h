/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _COORDINADORCLIENTE_H_RPCGEN
#define _COORDINADORCLIENTE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define COORDINADORCLIENTE 0x200000001
#define VERSION1 1

#if defined(__STDC__) || defined(__cplusplus)
#define rqsubir 1
extern  char ** rqsubir_1(char **, CLIENT *);
extern  char ** rqsubir_1_svc(char **, struct svc_req *);
#define rqbajar 2
extern  char ** rqbajar_1(char **, CLIENT *);
extern  char ** rqbajar_1_svc(char **, struct svc_req *);
#define ls 3
extern  char ** ls_1(void *, CLIENT *);
extern  char ** ls_1_svc(void *, struct svc_req *);
extern int coordinadorcliente_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define rqsubir 1
extern  char ** rqsubir_1();
extern  char ** rqsubir_1_svc();
#define rqbajar 2
extern  char ** rqbajar_1();
extern  char ** rqbajar_1_svc();
#define ls 3
extern  char ** ls_1();
extern  char ** ls_1_svc();
extern int coordinadorcliente_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_COORDINADORCLIENTE_H_RPCGEN */
