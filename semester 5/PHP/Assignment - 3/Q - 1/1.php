<?php
    $m1 = $_GET['sub1'];
    $m2 = $_GET['sub2'];
    $m3 = $_GET['sub3'];
    $m4 = $_GET['sub4'];
    $m5 = $_GET['sub5'];
    if($m1 > 40 && $m5 > 40 && $m4 > 40 && $m3 > 40 && $m2 > 40){
        echo " PASS";
        $sum = ($m1 +$m2 + $m3 + $m4 + $m5) / 5;
        if($sum > 75){
            echo " Distincation";
        }
        elseif($sum > 60){
            echo " First class";
        }
        elseif($sum > 50){
            echo " second class";
        }
        else{
            echo " PAss class";
        }

    }
    if($m1 + $m2 < 80){
        echo " ATKT";
    }
    elseif($m1 + $m3 < 80)
    {
        echo " ATKT";
    }
    elseif($m1 + $m4 < 80)
    {
        echo " ATKT";
    }
    elseif($m1 + $m5 < 80)
    {
        echo " ATKT";
    }
    elseif($m2 + $m3 < 80)
    {
        echo " ATKT";
    }
    elseif($m2 + $m4 < 80)
    {
        echo " ATKT";
    }
    elseif($m2 + $m5 < 80)
    {
        echo " ATKT";
    }
    elseif($m3 + $m4 < 80)
    {
        echo " ATKT";
    }
    elseif($m3 + $m5 < 80)
    {
        echo " ATKT";
    }
    elseif($m4 + $m5 < 80)
    {
        echo "   ATKT";
    }
    elseif(($m1+$m2+$m3+$m4+$m5)<200){
        echo " FAIL";
    }
?>