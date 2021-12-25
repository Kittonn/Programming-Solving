like = {}
n = int(input())
loob = list(map(int, input().split()))
for i in loob:
    if i not in like:
        like[i] = 1
    else:
        like[i] += 1
for i in sorted(like):
    if like[i] == max(like.values()):
        print(i, end = ' ')
