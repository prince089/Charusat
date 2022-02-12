<?php
    $id = 89;
    $name = 'joker';
    $unit = 103;
    $price =NULL;
    $temp = NULL;

    if($unit < 100 && $unit > 1){
        $price = 0.75 * $unit;
    }
    elseif($unit < 300 && $unit >101){
        $price = (( 300 - $unit) * 1) + 75;
    }
    elseif($unit < 500 && $unit >301){
        $price = ((300 - $unit) * 1.5) + 275;
    }
    elseif($unit < 500){
        $price = ((300 - $unit) * 1.75) + 575;
    }

    echo "name ".$name."<br/> id: ".$id."<br/> price : ".$price;
?>