a = list(input().encode('ascii'))
b = [i**3 for i in a]

ans = []
s = 0
for i in str(sum(b)):
    s += int(i)
    ans.append(s)
    if (ans[-1] > 10):
        s = 0
        for i in str(ans[-1]):
            s += int(i)
            ans.append(s)
print(sum(b))
print(ans)
print(ans[-1])