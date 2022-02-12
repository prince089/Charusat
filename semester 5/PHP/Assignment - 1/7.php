<?php
function check_prime($num)
{
    $flag_val = 1;
   if ($num == 1)
   
   for ($i = 2; $i <= $num/2; $i++)
   {
      if ($num % $i == 0)
      $flag_val = 0;
   }
   if ($flag_val == 1)
        echo "It is a prime number</br>";
   else
        echo "It is a non-prime number</br>";

   
}
$num = 47;
check_prime($num);

$num=47;  
$total=0;  
$x=$num;  
while($x!=0)  
{  
$rem=$x%10;  
$total=$total+$rem*$rem*$rem;  
$x=$x/10;  
}  
if($num==$total)  
{  
echo "Yes it is an Armstrong number</br>";  
}  
else  
{  
echo "No it is not an armstrong number</br>";  
} 

if($num%2){
    echo "your number is odd</br>";
}
else{
    echo "your number is even</br>";
}
?>