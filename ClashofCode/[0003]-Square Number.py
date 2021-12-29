n = int(input())
num = [int(i) for i in input().split()]
ans = []
for i in num:
    ans.append(i**2)
ans = set(ans)
txt = ' '.join(str(i) for i in ans)
print(txt)