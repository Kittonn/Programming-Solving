m, n = list(map(int, input().split()))
Matrix = []
Matrix_2 = []
for i in range(m):
    Matrix.append(list(map(int, input().split())))

for i in range(m):
    Matrix_2.append(list(map(int, input().split())))
    for j in range(n):
        Matrix[i][j] += Matrix_2[i][j]

for i in range(m):
    for j in range(n):
        print(Matrix[i][j], end = ' ')
    print()
    

