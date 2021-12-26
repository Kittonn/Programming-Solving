import math
A = int(input())
B = int(input())
gcd = (math.gcd(A,B))

print(int((A*B)//gcd))