x = 0
y = 1
ans = []
while x < 4000000:
    z = x + y
    x, y = y, z
    if (z % 2 == 0):
        ans.append(z)
print(sum(ans))
