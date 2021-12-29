n = int(input())
print('{}'.format('#'*n))
for i in range(1,n+1):
    print('{}{}'.format(' '*(n-i),'#'*(i*2-1)))
for i in range(n,0,-1):
    print('{}{}'.format(' '*(n-i),'#'*((i*2)-1)))