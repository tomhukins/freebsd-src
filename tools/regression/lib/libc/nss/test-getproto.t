#!/bin/sh
# $FreeBSD: src/tools/regression/lib/libc/nss/test-getproto.t,v 1.1.6.1 2008/11/25 02:59:29 kensmith Exp $

do_test() {
	number=$1
	comment=$2
	opt=$3
	if ./$executable $opt; then
		echo "ok $number - $comment"
	else
		echo "not ok $number - $comment"
	fi
}

cd `dirname $0`

executable=`basename $0 .t`

make $executable 2>&1 > /dev/null

echo 1..8
do_test 1 'getprotobyname()'        '-n'
do_test 2 'getprotobynumber()'      '-v'
do_test 3 'getprotoent()'           '-e'
do_test 4 'getprotoent() 2-pass'    '-2'
do_test 5 'building snapshot, if needed'    '-s snapshot_proto'
do_test 6 'getprotobyname() snapshot'       '-n -s snapshot_proto'
do_test 7 'getprotobynumber() snapshot'     '-v -s snapshot_proto'
do_test 8 'getprotoent() snapshot'          '-e -s snapshot_proto'
