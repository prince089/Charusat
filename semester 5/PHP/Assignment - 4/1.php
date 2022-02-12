<?php

    $cont = count($_FILES['file']['name']);
    $to = $_POST['email'];
    $sub = "submit file report";
    $msg = "<table>";
 
    $headers = "Content-type:text/html";

           
            

    for($i = 0 ; $i< $cont ;$i++){
        $sr = $_FILES["file"]["tmp_name"][$i];
        $dp = "file/".$_FILES["file"]["name"][$i];
        if(move_uploaded_file($sr,$dp)){
          
           $msg.="<tr><td>" .$_FILES["file"]["name"][$i]."</td>";
           $msg.="<td> file submit sucess </td></tr>";
           //echo "move<br>";
           //echo "your mail is".$to;
           

            if(mail($to,$sub,$msg,$headers)){

                echo "recipet send successfully<br>";
            }
            else{

                echo "something went wrong please try to contect your admin<br>";
            }



        }
        else{

            echo"sorry file can't submit we will send details in your mail<br>";
            $msg.="<tr><td>" .$_FILES['file']['name'][$i]."</td>";
            $msg.="<td> file submit faild </td></tr>";
            echo "your mail is".$to;
            if(mail($to,$sub,$msg,$headers)){

                echo "recipet send successfully<br>";
            }
            else{

                echo "something went wrong please try to contect your admin<br>";
            }
        }

    }
    $msg.="</table>";
?>