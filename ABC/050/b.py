n = int(input())
t = list(map(int, input().split()))
m = int(input())
p = list()
x = list()
for i in range(m):
    a, b = map(int, input().split())
    p.append(a)
    x.append(b)

for i in range(m):
    count = 0
    for j in range(n):
        z = p[i] -1
        if (j == z):
            count += x[i]

        else:
            count += t[j]
    print(count)
