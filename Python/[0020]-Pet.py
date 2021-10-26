n = []
for i in range(5):
    n.append(list(map(int, input().split())))
total = Max = count = 0
for i in range(5):
    total = sum(n[i])
    if total > Max:
        Max = total
    if Max == sum(n[i]):
        count = i + 1
    
print(count, Max)