num = list(map(str,input().split()))
n = [];new = []
for i in range(int(num[1])):
    n.append(int(input()))
n.sort()

for i in range(len(n)):
    new.append(n[i])
    x = ', '.join(str(i) for i in new)
    print("ROW {} : [{}]".format(i+1,x))