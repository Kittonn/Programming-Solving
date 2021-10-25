y = list(map(int, input().split()))

def B(year):
    a = 1
    b = 1
    c = 0
    if year >= 0:
        for i in range(year):
            new_b = b + c + 1
            new_c = b
            b = new_b
            c = new_c
        total = a + b + c
        return '{:d} {:d}'.format(b, total)
for i in y:
    if i == -1:
        break
    print(B(i))
