num = []
total = 0
for i in range(9):
    x = int(input())
    total += x
    num.append(x)
a = total - 100
for i in num:
    for j in num:
        if ((i != j) and (i + j == a)):
            num.remove(i)
            num.remove(j)
for i in num:    
    print(i)