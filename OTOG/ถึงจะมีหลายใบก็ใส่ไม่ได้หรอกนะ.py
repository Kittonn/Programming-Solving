n = int(input())
num = list(map(int,input().split()))
ans = []
for i in num:
    if i not in ans:
        ans.append(i)
print(len(ans))