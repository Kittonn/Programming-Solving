from math import *
from itertools import combinations

n = int(input())
p = []
ans = []
for i in range(n):
    p.append(list(map(int, input().split())))
for i in range(1, n + 1):
    com = list(combinations(p, i))
    for j in com:
        s = 1
        b = 0
        for k in j:
            s *= k[0]
            b += k[1]
        ans.append(abs(s - b))
print(min(ans))
