l = list(map(int, input().split()))
t = input()
l.sort()
for i in t:
    if (i == 'A'):
        print(l[0], end = ' ')
    elif (i == 'B'):
        print(l[1], end = ' ')
    else:
        print(l[2], end = ' ')