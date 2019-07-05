# -*- coding: utf-8 -*-

# 標準入力

# 文字列の入力
S = input()  # type(S) => <class 'str'>

# 整数の入力
a = int(input())

# 少数の入力
x = float(input())  # type(x) => <class 'float'>

# リストとして受け取る
S = input().split()        # type(S) => <class 'list'>

# 1行に複数の整数
N = int(input())
A = list(map(int, input().split()))  # 入力のときに N を使う必要はありません
# print(A[0])

# 1行に決まった数の整数」
a, b = map(int, input().split())  # list() を使っても構いません


# スペース区切りの整数の入力
b, c = map(int, input().split())

# 最初にすべて読み込む必要がある場合 - 行列、グリッド
H, W = map(int, input().split())
S = []
for _ in range(H):
    S.append(input())  # S += [input()] とも書ける


# 文字列の入力
s = input()
# 出力
print("{} {}".format(a+b+c, s))