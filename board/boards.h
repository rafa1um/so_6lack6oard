/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _BOARDS_H_RPCGEN
#define _BOARDS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct board {
	int x1;
	int y1;
	int x2;
	int y2;
	int r;
	int g;
	int b;
	int n;
};
typedef struct board board;

#define BOARDS_PROG 1111111
#define BOARDS_VERSION 7

#if defined(__STDC__) || defined(__cplusplus)
#define UPDATE_BOARD 1
extern  int * update_board_7(board *, CLIENT *);
extern  int * update_board_7_svc(board *, struct svc_req *);
#define GET_LAST 2
extern  board * get_last_7(board *, CLIENT *);
extern  board * get_last_7_svc(board *, struct svc_req *);
#define MSG 3
extern  int * msg_7(board *, CLIENT *);
extern  int * msg_7_svc(board *, struct svc_req *);
extern int boards_prog_7_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define UPDATE_BOARD 1
extern  int * update_board_7();
extern  int * update_board_7_svc();
#define GET_LAST 2
extern  board * get_last_7();
extern  board * get_last_7_svc();
#define MSG 3
extern  int * msg_7();
extern  int * msg_7_svc();
extern int boards_prog_7_freeresult ();
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

#endif /* !_BOARDS_H_RPCGEN */
