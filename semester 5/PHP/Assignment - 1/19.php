<?php

function getMax($array)
{
$n = count($array);
$max = $array[0];
for ($i = 1; $i < $n; $i++)
	if ($max < $array[$i])
		$max = $array[$i];
	return $max;	
}


function getMin($array)
{
$n = count($array);
$min = $array[0];
for ($i = 1; $i < $n; $i++)
	if ($min > $array[$i])
		$min = $array[$i];
	return $min;	
}


$array = array(1, 2, 3, 4, 5);
$Max = getMax($array);
$Min = getMin($array);
echo $Max-$Min;
?>
