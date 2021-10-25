x = 'P'
y = 'N'
z = 'N'
txt = input()
for i in txt:
    if i == 'A':
        t = x
        x = y
        y = t
    if i == 'B':
        t = y 
        y = z 
        z = t
    if i == 'C':
        t = z
        z = x
        x = t

if x == 'P':
    print(1)
elif y == 'P':
    print(2)
else:
    print(3)