<?php
$a = intval(trim(fgets(STDIN)));
if ($a == 7 || $a == 5 || $a == 3){
    $ans = "YES";
}
else{
    $ans = "NO";
}
echo $ans . "\n";
