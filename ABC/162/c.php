<?php

function gcd(array $list)
{
    // validationだけ先に
    $c = count($list);
    if ($c === 0)
        return 0;
    else if ($c === 1)
        return $list[0];

    return calcGCD($list);
}

function calcGCD(array &$list)
{
    $c = count($list);

    // ユークリッドの互除法を末尾2要素にかける
    $v = $list[$c - 1] % $list[$c - 2];
    if ($v === 0) {
        if ($c === 2)
            return $list[$c - 2];

        // 2要素の最大公約数が決まったら、配列を更新して再帰
        array_pop($list);
        return calcGCD($list);
    }

    $list[$c - 1] = $list[$c - 2];
    $list[$c - 2] = $v;
    return calcGCD($list);
}

function lcm(array $list)
{
// validationだけ先に
    $c = count($list);
    if ($c === 0)
        return 0;
    else if ($c === 1)
        return 1;

    return calcLCM($list);
}

function calcLCM(array &$list)
{
    $c = count($list);
    $v = $list[$c - 1] * $list[$c - 2] / gcd(array($list[$c - 1], $list[$c - 2]));

    if ($c === 2)
        return $v;

    $list[$c - 2] = $v;
    array_pop($list);
    return calcLCM($list);
}

$k = fgets(STDIN);
$ans = 0;
for ($i = 1; $i <= $k; $i++){
    for ($j = 1 $j <=$k; $j++){
        for ($l = 1; $l <= $k; $l++)
        $a = array($i,$j,$l);
        $ans += gcd($a);
    }
}
echo $ans;

