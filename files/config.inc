<?php

/* changes these values to suit your local configuration */

$rrdpath = "/usr/local/etc/as-stats/rrd";
$daystatsfile = "/usr/local/etc/as-stats/asstats_day.txt";
$rrdtool = "/usr/bin/rrdtool";

$daypeerstatsfile = "/usr/local/etc/as-stats/peerasstats_day.txt";
$showpeeras = false;

$asinfofile = "asinfo.txt";
$knownlinksfile = "/usr/local/etc/as-stats/conf/knownlinks";
$outispositive = true;
$show95th = true;

$ntop = 20;
$showv6 = true;
$showtitledetail = true;
$hidelinkusagename = true;	  	# $showtitledetail will need to be true to allow this
$vertical_label = true;			# vertical IN/OUT label in graph
$brighten_negative = true;		# brighten the "negative" part of graphs

$whois = "/usr/bin/whois";
$assetpath = "asset";
$asset_cache_life = "604800";	# 604800 seconds = 7 days

$compat_rrdtool12 = false;		# compatibility with RRDtool 1.2 (show95th will not work if this is set)

/* Custom links to be shown for each AS. You can use %as% as a
   placeholder for the ASN. */
$customlinks = array(
	'PeeringDB' => 'http://www.peeringdb.com/view.php?asn=%as%',
	'robtex' => 'http://www.robtex.com/as/as%as%.html',
	'HE' => 'http://bgp.he.net/AS%as%',
	'RIPEstat' => 'https://stat.ripe.net/AS%as%#tabId=at-a-glance',
	'euro-IX' => 'https://www.euro-ix.net/tools/asn_search?query=%as%',
	'Radar Qrator' => 'https://radar.qrator.net/general/?asnum=%as%'
);

/* Custom time intervals for top N AS */
/*
$top_intervals[] = array(
	'hours' => 7*24,
	'statsfile' => '/data/as-stats/asstats_week.txt',
	'label' => '1 week'
);
$top_intervals[] = array(
	'hours' => 30*24,
	'statsfile' => '/data/as-stats/asstats_month.txt',
	'label' => '30 days'
);
*/


/* END - no closing php tag needed here (prevents problems with stray whitespace) */
