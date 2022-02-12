<?php
$zero = '0';
$positive = '0';
$negative = '0';
$arr = array('-4','3','-9','0','4','1');
$total = count($arr);
foreach ($arr as $num){
    if ($num > '0'){
    $positive++;
    } else if ($num < '0'){
    $negative++;
    } else {
        $zero++;
    }
}
echo "Positive: ".$positive;
echo '<br />';
echo "Negative: ".$negative;
echo '<br />';
echo "Zero: ".$zero;
?>
