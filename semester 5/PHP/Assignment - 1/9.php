<?php
    $roll = 89;
    $name = "prince";
    $tot_mark = 595/6;
    $gread = NULL;

    if($tot_mark>75){
        $gread = 'o';
    }
    elseif($tot_mark<75 && $tot_mark>68){
        $gread = 'a';
    }
    elseif($tot_mark<68 && $tot_mark>60){
        $gread = 'b';
    }
    elseif($tot_mark<60 && $tot_mark>48){
        $gread = 'c';
    }
    else {
        $gread = 'fail';
    }

    echo " name : ".$name." roll no : ".$roll." gread : ".$gread;
?>