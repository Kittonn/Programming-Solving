h,m = map(int,input().split())
s = int(input())
if s+m >= 60:
    h += (s+m) //60
    m = (s+m) % 60
    if h >= 24:
        h-=24
else:
    m+= s
print("{:02d} {:02d}".format(h,m))