<?php

#Variable declaration
$x=4;

#if else condition
if ($x ==3)
	print "Yes\n";
else
	print "No\n";

#function to check the static variable value
function check_static()
{
	STATIC $count=0;
	$count++;
	print "Count is $count\n";
}

#we can define CONSTANT like this
define ("MINIMUM",100);

#defining the string
$mystring="Dayanand";
#print "$mystring\n";

#to print the todays date
$d=date("D");
#print "$d\n";


#for loop initilization
$x=0;
for($x=0;$x<5;$x++)
#	print "$x \n";

#Array declaration
$myarray=array(1,2,3,4,5,'adadnjasdn');

foreach($myarray as $value)
{
	if($value == 3)
		continue;
	else
		print "Element is $value\n";
}

#string concat 
$aa='dayanand';
$bb='chinchure';

print $aa.$bb;

print "\n";

?>
