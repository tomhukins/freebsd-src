#!/bin/sh
# $FreeBSD: src/tools/regression/usr.bin/pkill/pkill-s.t,v 1.1.18.1 2008/11/25 02:59:29 kensmith Exp $

base=`basename $0`

echo "1..2"

name="pkill -s <sid>"
sid=`ps -o tsid -p $$ | tail -1`
sleep=`mktemp /tmp/$base.XXXXXX` || exit 1
ln -sf /bin/sleep $sleep
$sleep 5 &
sleep 0.3
pkill -f -s $sid $sleep
ec=$?
case $ec in
0)
	echo "ok 1 - $name"
	;;
*)
	echo "not ok 1 - $name"
	;;
esac
rm -f $sleep

name="pkill -s 0"
sleep=`mktemp /tmp/$base.XXXXXX` || exit 1
ln -sf /bin/sleep $sleep
$sleep 5 &
sleep 0.3
pkill -f -s 0 $sleep
ec=$?
case $ec in
0)
	echo "ok 2 - $name"
	;;
*)
	echo "not ok 2 - $name"
	;;
esac
rm -f $sleep
