<?php
$array = [];
for ($i = 0; $i <3; ++$i) {
    $input = fgets(STDIN);
    $temp = explode(" ", $input);
    array_push($array, $temp);
}



//echo print_r($array);



//$input = intval(trim(fgets(STDIN)));
//$temp = str_split($a);

echo  print_r($array);
////echo print_r($array);
//$min = 10000000;
//for ($i = 0; $i < count($array) - 2; ++$i) {
//    $temp = (int)$array[$i] * 100 + (int)$array[$i + 1] * 10 + (int)$array[$i + 2];
//    //echo $temp . "\n";
//    $diff = abs($temp - 753);
//    if ($diff < $min) {
//        $min = $diff;
//    }
//}
//echo $min . "\n";
