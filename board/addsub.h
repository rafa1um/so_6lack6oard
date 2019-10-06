/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADDSUB_H_RPCGEN
#define _ADDSUB_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct board {
	int x;
	int y;
	int r;
	int g;
	int b;
	int n;
};
typedef struct board board;

#define ADDSUB_PROG 1111111
#define ADDSUB_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define UPDATE_BOARD 1
extern  int * update_board_1(board *, CLIENT *);
extern  int * update_board_1_svc(board *, struct svc_req *);
#define GET_LAST 2
extern  int * get_last_1(board *, CLIENT *);
extern  int * get_last_1_svc(board *, struct svc_req *);
extern int addsub_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define UPDATE_BOARD 1
extern  int * update_board_1();
extern  int * update_board_1_svc();
#define GET_LAST 2
extern  int * get_last_1();
extern  int * get_last_1_svc();
extern int addsub_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_board (XDR *, board*);

#else /* K&R C */
extern bool_t xdr_board ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADDSUB_H_RPCGEN */
