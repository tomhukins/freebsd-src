/* s_significandf.c -- float version of s_significand.c.
 * Conversion to float by Ian Lance Taylor, Cygnus Support, ian@cygnus.com.
 */

/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

#ifndef lint
static char rcsid[] = "$FreeBSD: src/lib/msun/src/s_significandf.c,v 1.7.32.1 2008/11/25 02:59:29 kensmith Exp $";
#endif

#include "math.h"
#include "math_private.h"

float
significandf(float x)
{
	return __ieee754_scalbf(x,(float) -ilogbf(x));
}
