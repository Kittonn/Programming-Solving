num = input()
ans = []
s = 0
for i in num:
    s += int(i)
    ans.append(s)
    if (ans[-1] > 10):
        s = 0
        for i in str(ans[-1]):
            s += int(i)
            ans.append(s)
            
print(ans[-1])