from math import sqrt
num = int(input())

if (num == -1):
    print('i')
elif (sqrt(num)%1 ==0):
    print(int(sqrt(num)))
else:
    print('false')