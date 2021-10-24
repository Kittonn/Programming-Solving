a = int(input())
b = int(input())
c = int(input())
total = a + b + c 
if (total >= 80 and total <= 100):
    print('A')
elif (total >= 75 and total < 80):
    print('B+')
elif (total >= 70 and total < 75):
    print('B')
elif (total >= 65 and total < 70):
    print('C+')
elif (total >= 60 and total < 65):
    print('C')
elif (total >= 55 and total < 60):
    print('D+')
elif (total >= 50 and total < 55):
    print('D')
else:
    print('F')