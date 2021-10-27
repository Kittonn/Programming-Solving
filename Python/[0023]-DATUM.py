D = ["Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"]
M = [0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
d, m = map(int, input().split())
s = 0
for i in range(m):
    s += M[i]
    if (i == (m - 1)):
        s += d
print(D[s % 7])