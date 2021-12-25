n = int(input())
num = [];M = -2000000000;m = 2000000000
for i in range(n):
    num.append(int(input()))
for i in num:
    if i > M:
        M = i
    if i < m:
        m = i
print(f'{M}\n{m}')