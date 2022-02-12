
<?php

    if(isset($_GET)){
        echo "name  : ".$_GET["name"]."<br/>";
        echo "age  : ".$_GET["age"]."<br/>";
        echo "address  : ".$_GET['addr']."<br/>";
    }else{
        echo "phali fursad me nikal";
    }
     
?>
