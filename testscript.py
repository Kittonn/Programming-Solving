a = list(input())
#n = [ord(i) for i in a]

num = [ord(i)**3 for i in a]
s = sum(num)

while len(str(s)) != 1:
    num = [int(i) for i in str(s)]
    s = sum(num)

print(s)
    