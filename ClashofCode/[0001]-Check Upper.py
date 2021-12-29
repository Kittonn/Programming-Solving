n = int(input())
ans=[]
s = n
for i in range(10):
    ans.append(n)
    n+=s
for i in ans:
    print(i,end=' ')