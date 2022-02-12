<html>
<head>
<title>19BCA068</title>
</head>
<body>
<form action="#" method="POST">
    <select id="cmb" name="srno">
        <?php
            $row = 1;
            $mycsvfile = array();
            if (($handle = fopen("1.csv", "r")) !== FALSE) {
                while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
                    $num = count($data);
                    $row++;
                    
                    if($row>2){
                        echo "<option value=".$data[0].">".$data[2]."</option>";
                    }
                    $mycsvfile[] = $data;
                }
                fclose($handle);
            }
        ?>
        </select>
    <input type="submit" />
    <?php
        if(isset($_POST['srno']) && !empty($_POST['srno'])){
            $srno = $_POST['srno'];

            $row = 1;
            $mycsvfile = array();
            if (($handle = fopen("1.csv", "r")) !== FALSE) {
                while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
                    $num = count($data);
                    $row++;
                    
                    if($row>2){
                        if($data[0]===$srno){
                            setcookie('StockData',$data[0],time()+3600,'/');
                            echo "<p>Current Stock : <b>".$data[3]."</b></p>";
                        }
                    }
                    $mycsvfile[] = $data;
                }
                fclose($handle);
            }

        }
    ?>
</form>
</body>
</html>