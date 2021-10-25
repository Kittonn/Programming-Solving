i,j,k = map(int,input().split())
if k - j > j - i:
    print(k-j-1)
else:
    print(j-i-1)