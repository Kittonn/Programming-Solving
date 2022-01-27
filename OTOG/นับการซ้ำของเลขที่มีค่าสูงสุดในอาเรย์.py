n = int(input())
num = list(map(int,input().split()))
c = 0
for i in num:
    if i == max(num):
        c += 1
print(c)
