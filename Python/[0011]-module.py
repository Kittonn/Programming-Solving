n = []
c = 0
for i in range(10):
    n.append(int(input()))
m = []
for i in n:
    i %= 42
    if i in m:
        c += 0
    else: 
        c += 1
    m.append(i)
print(c)
