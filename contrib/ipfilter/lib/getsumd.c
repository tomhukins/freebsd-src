/*	$FreeBSD: src/contrib/ipfilter/lib/getsumd.c,v 1.3.6.1 2008/11/25 02:59:29 kensmith Exp $	*/

/*
 * Copyright (C) 2002 by Darren Reed.
 * 
 * See the IPFILTER.LICENCE file for details on licencing.  
 *   
 * $Id: getsumd.c,v 1.2.4.1 2006/06/16 17:21:01 darrenr Exp $ 
 */     

#include "ipf.h"

char *getsumd(sum)
u_32_t sum;
{
	static char sumdbuf[17];

	if (sum & NAT_HW_CKSUM)
		sprintf(sumdbuf, "hw(%#0x)", sum & 0xffff);
	else
		sprintf(sumdbuf, "%#0x", sum);
	return sumdbuf;
}
