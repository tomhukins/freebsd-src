#!/usr/bin/perl
# Copyright (c) 1996 Wolfram Schneider <wosch@FreeBSD.org>. Berlin.
#
# epfe - extract printing filter examples from printing.sgml
#
# usage: 
#	$ cd /usr/share/examples/printing
#	$ epfe < ../../doc/handbook/printing.sgml
#
# $FreeBSD: src/tools/tools/epfe/epfe.pl,v 1.4.52.1 2008/11/25 02:59:29 kensmith Exp $

$in = 0; @a = ();
sub Print { s/\&amp\;/&/g; push(@a,$_); }
sub out { 
    local($name, *lines) = @_;
    open(F, "> $name") || die "open $_[0]: $!\n"; 
    print F @lines;
    close F;
}

while(<>) {
    if (/^<code>/) {
	$in = 1;
    } elsif (m%</code>% && $in > 0) {
	if ($in > 1) {
	    $name = 'unknown' if !$name;
	    while(1) { if ($d{$name}) { $name .= 'X'; } else { last } }
	    &out("$name", *a);
	    $d{$name} = $name;
	}
	$in = 0; $name = ''; @a = ();
    } elsif ($in == 1 && /^\#\s*!/) {
	$in++; &Print;
    } elsif ($in > 1) {
	$name = $1 if (!$name && /^\#\s+(\S+)\s+-\s+/);
	$in++; &Print;
    }
}
