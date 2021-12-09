data = [{1:20,2:30,3:30,4:40,5:40},
        {1:5,2:10,3:15,4:20,5:25},
        {'R':15,'B':15,'W':10,'G':15,'BK':15},
        {1:20,2:15,3:25,4:30,5:25}]
insert = []
ans = []
for i in range(5):
    j = input()
    if j.isdigit():
        j = int(j)
    insert.append(j)
for i in range(len(data)):
    for j in data[i]:
        for k in insert[:-1]:
            if j == k:
                ans.append(data[i][j])
                break
data1 = []
print('''''')