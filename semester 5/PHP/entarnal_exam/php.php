
<html>
    <body>

<form action="<?php echo $_SERVER["PHP_SELF"];?>" method="post">
        <select name="pro_select" id="pro">
            
            <option value="Fruti">Fruti</option>
            <option value="Amul Masti Dahi 400 GMS">Amul Masti Dahi 400 GMS</option>
            <option value="Amul Milk (Slim Trim) 500 M">Amul Milk (Slim Trim) 500 M</option>
            <option value="Parle G 100 GMS">Parle G 100 GMS</option>
            <option value="Amul Milk (Gold) 500 ML">Amul Milk (Gold) 500 ML</option>
            <option value="Amul Milk 500 ML">Amul Milk 500 ML</option>
            <option value="Thumps Up 750 ML">Thumps Up 750 ML</option>
            <option value="Pepsi 750 ML">Pepsi 750 ML</option>
            <option value="Dawat Rice 5 KG">Dawat Rice 5 KG</option>
            <option value="Bournvita">Bournvita</option>
        </select>
        <input type="submit" value="submit">
        <?php
      if(isset($_POST['pro_select'])) {
        $ch = $_POST['pro_select'];
        echo $ch;        
        echo "<br>";
        setcookie("ch",$ch,time() +250000);        
        if(isset($_COOKIE['ch'])){
            echo "<br>";           
            $temp = $_COOKIE['ch'];
            $file = fopen("1.csv","r");
           
            while(!feof($file)){
                $data = fgetcsv($file);
                //print_r($data);
                if($data[0]===$temp){
                    echo "stoke is  ".$data[3]." and product is ".$data[2];
                }                
            }
            echo "cookie is ".$_COOKIE['ch'];
        }
        
      }  
      else{
          echo "not set";
      }
      
?>


</form>


</body>

</html>
