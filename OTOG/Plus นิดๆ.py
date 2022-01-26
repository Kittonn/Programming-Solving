n,q = map(int, input().split())
num = list(map(int,input().split()))
ques = []
for i in range(q):
    ques.append(list(map(int,input().split())))
for i in ques:
    total = 0
    for i in range(i[0]-1,i[1]):
        total += num[i]
    print(total)