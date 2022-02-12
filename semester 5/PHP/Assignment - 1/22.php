<?php


function CountingEvenOdd( $arr, $arr_size)
{
	$even_count = 0;		
	$odd_count = 0;			
		

	for( $i = 0 ; $i < $arr_size ; $i++)
	{
	
		if ($arr[$i] & 1 == 1)
			$odd_count ++ ;	
		else			
			$even_count ++ ;		
	}

	echo "Number of even elements = " ,
		$even_count," Number of odd " ,
			"elements = " ,$odd_count ;	
}


	$arr = array(2, 3, 4, 5, 6);
	$n = count($arr);

	
	CountingEvenOdd($arr, $n);


?>
