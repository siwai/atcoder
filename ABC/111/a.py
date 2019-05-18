n = input()
ans = ''
for i in range(len(n)):
    if n[i:i + 1] == '1':
        ans += '9'
    else:
        ans += '1'
print(ans)
