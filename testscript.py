
n = int(input())
num = [];ans=[];s = 1

for i in range(2,n+2):
    if n % i == 0:
        num.append(i)
for i in num:
    t = True
    for j in range(2,i):
        if i % j == 0:
            t = False
    if t :
        ans.append(i)
        s *= i
if s != n:
    ans.append(n//s)
ans.sort()
for i in ans:
    print(i)
