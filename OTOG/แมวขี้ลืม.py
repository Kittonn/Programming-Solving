mountain = []; num = []

while True:
    n = int(input())
    if n == -1:
        break
    else:
        mountain.append(n)

while True:
    n = int(input())
    if n == -1:
        break
    else:
        num.append(n)

for i in num:
    print(mountain[i-1])