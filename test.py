
d = {}
for elem in l:
    if elem[0] in d:
        d[elem[0]].append(elem[1])
    else:
        d[elem[0]] = elem[1]
print(d)