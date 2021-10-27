n = int(input())
num = list(map(int, input().split()))
num.sort()
for i in range(n):
    if (num[0] == 0):
        num[0], num[i] = num[i], num[0]
for i in num:
    print(i, end = '')