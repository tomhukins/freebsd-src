#!/bin/sh
# $FreeBSD: src/tools/regression/usr.bin/pkill/pkill-P.t,v 1.1.18.1 2008/11/25 02:59:29 kensmith Exp $

base=`basename $0`

echo "1..1"

name="pkill -P <ppid>"
ppid=$$
sleep=`mktemp /tmp/$base.XXXXXX` || exit 1
ln -sf /bin/sleep $sleep
$sleep 5 &
sleep 0.3
pkill -f -P $ppid $sleep
ec=$?
case $ec in
0)
	echo "ok - $name"
	;;
*)
	echo "not ok - $name"
	;;
esac

rm -f $sleep
