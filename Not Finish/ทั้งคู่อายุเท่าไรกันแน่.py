n,m,y = map(int,input().split())
ans = []
for i in range(1,100):
    for j in range(1,100):
        if i-j == n and i == (m*j)-(m*y)+y:
            ans.append(i)
            ans.append(j)
for i in ans:
    print(i,end=' ')
            