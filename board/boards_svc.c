/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "boards.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
boards_prog_7(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		board update_board_7_arg;
		board get_last_7_arg;
		board msg_7_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case UPDATE_BOARD:
		_xdr_argument = (xdrproc_t) xdr_board;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) update_board_7_svc;
		break;

	case GET_LAST:
		_xdr_argument = (xdrproc_t) xdr_board;
		_xdr_result = (xdrproc_t) xdr_board;
		local = (char *(*)(char *, struct svc_req *)) get_last_7_svc;
		break;

	case MSG:
		_xdr_argument = (xdrproc_t) xdr_board;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) msg_7_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (BOARDS_PROG, BOARDS_VERSION);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, BOARDS_PROG, BOARDS_VERSION, boards_prog_7, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (BOARDS_PROG, BOARDS_VERSION, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, BOARDS_PROG, BOARDS_VERSION, boards_prog_7, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (BOARDS_PROG, BOARDS_VERSION, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "%s", "svc_run returned");
	exit (1);
	/* NOTREACHED */
}
