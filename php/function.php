<?php

$x=4;

function call()
{
	$x=10;
	print "\$x Inside function $x\n";
}

function mult($value)
{
	$value=$value*10;
	return $value;
}

$retvalue=mult(100);
print "return value from function $retvalue\n";
?>
