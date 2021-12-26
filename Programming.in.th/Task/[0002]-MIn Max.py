n = int(input())
M = -2000000000; m = 2000000000

for i in range(n):
    x = int(input())
    if (x > M):
        M = x
    if (x < m):
        m = x
    
print(m)
print(M)