txt = input()
o = []
for i in txt:
    if i == 'O':
        o.append(i)
print(len(o) // 2)