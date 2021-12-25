n = int(input())
txt = []

for i in range(n):
    txt.append(input())
txt.sort()

new_txt = list(dict.fromkeys(txt))
for i in new_txt:
    print(i)


