<?php
    $arry = array();
    $no = 100;
    $temp = $no;
    $count = 0;
    while($temp != 0){

        $temp = $temp/10;
        $count++;
    }
    echo $count ."<br/>";
    $i = 0;
    $rem = 0;
    $x =0;
    while($i != $count){
        $rem = $no % 10;
        $x = pow(10,$i)*$rem;
        $no /= 10;
        //array_push($arry,$x);
        echo $x."</br>"; 
        $i +=1;
    }
    //foreach($arry as $val){
    //    echo $val."<br/>" ;
    //}
?>


