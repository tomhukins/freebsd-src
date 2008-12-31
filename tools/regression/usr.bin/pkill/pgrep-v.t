#!/bin/sh
# $FreeBSD: src/tools/regression/usr.bin/pkill/pgrep-v.t,v 1.1.18.1 2008/11/25 02:59:29 kensmith Exp $

base=`basename $0`

echo "1..2"

name="pgrep -v"
sleep=`mktemp /tmp/$base.XXXXXX` || exit 1
ln -sf /bin/sleep $sleep
$sleep 5 &
sleep 0.3
pid=$!
if [ -z "`pgrep -f -v $sleep | egrep '^'"$pid"'$'`" ]; then
	echo "ok 1 - $name"
else
	echo "not ok 1 - $name"
fi
if [ ! -z "`pgrep -f -v -x x | egrep '^'"$pid"'$'`" ]; then
	echo "ok 2 - $name"
else
	echo "not ok 2 - $name"
fi
kill $pid
rm -f $sleep
