n = int(input())
m = []
for i in range(n):
    m.append(int(input()))
for  i in m:
    if (i % 2 == 0 and i != 2):
        print('F')
    else:
        print('T')