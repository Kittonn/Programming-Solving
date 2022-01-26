total = 0
n = int(input())
while n > 0:
    if n >= 9:
        total += 3000
        n -= 15
    elif n >= 4:
        total += 1500
        n -= 5
    elif n >= 2:
        total += 800
        n -= 2
    else:
        total += 500
        n -= 1
print(total)