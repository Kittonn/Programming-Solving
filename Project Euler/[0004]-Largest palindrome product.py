def palin(a):
    a = str(a)
    if (a == a[::-1]):
        return True
    else:
        return False

ans = []
for i in range(100, 1000):
    for j in range(100, 1000):
        if (palin(i*j)):
            ans.append(i*j)
print(max(ans))