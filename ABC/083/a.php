<?php
//$n = 4;
//for ($i = 0; $i < $n; ++$i) {
//    $a[] = intval(trim(fgets(STDIN)));
//}
$input = fgets(STDIN);
// 取得した入力値を半角スペースで分解します
$a = explode(" ", $input);
$l = ($a[0] + $a[1]);
$r = ($a[3] + $a[2]);
//echo $l . $r;
if ($l == $r){
    $ans = 'Balanced';
}
if($l < $r){
$ans = 'Right';
}
if ($l > $r ){
    $ans = 'Left';
}


echo $ans . "\n";
