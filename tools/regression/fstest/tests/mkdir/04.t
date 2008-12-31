#!/bin/sh
# $FreeBSD: src/tools/regression/fstest/tests/mkdir/04.t,v 1.1.6.1 2008/11/25 02:59:29 kensmith Exp $

desc="mkdir returns ENOENT if a component of the path prefix does not exist"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..3"

n0=`namegen`
n1=`namegen`

expect 0 mkdir ${n0} 0755
expect ENOENT mkdir ${n0}/${n1}/test 0755
expect 0 rmdir ${n0}
