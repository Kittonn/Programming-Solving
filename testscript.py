#  *
# ***
#  *
# ***
#*****
#  |
#==V==

n = 2
for k in range(2,n+2):
    for i in range(1,k+1):
        for j in range(k-i):
            print(' ',end='')
        for m in range(i*2-1):
            print('*',end='')
        print()