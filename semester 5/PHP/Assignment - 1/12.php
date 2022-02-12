<?php


function result($N)
{
	
	for ($num = 0; $num < $N; $num++)
	{
		
		if ($num % 3 == 0 && $num % 7 == 0)
			echo $num, " ";
	}
}


$N = 100;


result($N);


?>
