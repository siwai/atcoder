<?php
# 整数の入
        fscanf(STDIN, "%d", $a);


$array = [];

for($i=0;$i <$a ; $i++){
# スペース区切りの整数の入力
// fscanf(STDIN,"%s %d", $array[$i]["city"], $array[$i]["no"]);
fscanf(STDIN,"%s %d", $b, $c);

$temp = [
'city' => $b,
'point' => $c,
'id' => $i+1
];
array_push($array, $temp);
//echo    (print_r($temp));

}


//echo    (print_r($array));

foreach ($array as $key => $value) {
$city[$key] = $value["city"];
$no[$key] = $value["point"];
}
//
//array_multisort($array, SORT_ASC, $city);
array_multisort($city, SORT_ASC,
        $no, SORT_DESC,
        $array);

// echo    (print_r($array))

foreach ($array as $key => $value) {
echo ($value['id']."\n");
}


# 文字列の入力
//fscanf(STDIN, "%s", $s);
//# 出力
//echo ($a+$b+$c)." ".$s."\n";
?>