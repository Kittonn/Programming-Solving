n = input()
new = []
M = 0
for i in n:
    if (i == '[' or i == ']' or i == ','):
        pass
    else:
        new.append(i)
print(new)
'''for i in new:
    if i > M:
        M = i
print(M)'''