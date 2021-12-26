import math

n = int(input())
num = [int(i) for i in input().split()]

s = math.gcd(num[0],num[1])

for i in num[2:]:
    s = math.gcd(i,s)

print(sum(num) // s)