#!/bin/sh
# $FreeBSD: src/tools/regression/fstest/tests/truncate/01.t,v 1.1.6.1 2008/11/25 02:59:29 kensmith Exp $

desc="truncate returns ENOTDIR if a component of the path prefix is not a directory"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..5"

n0=`namegen`
n1=`namegen`

expect 0 mkdir ${n0} 0755
expect 0 create ${n0}/${n1} 0644
expect ENOTDIR truncate ${n0}/${n1}/test 123
expect 0 unlink ${n0}/${n1}
expect 0 rmdir ${n0}
