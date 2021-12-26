import math

n = int(input())
time = [int(i) for i in input().split()]

lcm = (time[0] * time[1]) // math.gcd(time[0],time[1])

for i in time[2:]:
    lcm = (i * lcm) // math.gcd(i,lcm)

print(lcm)