num = []
for i in range(3):
    num.append(int(input()))
dic = {}
for i in num:
    if i not in dic:
        dic[i] = 1
    else:
        dic[i] +=1
for i in dic:
    if dic[i] == 1:
        print(i)