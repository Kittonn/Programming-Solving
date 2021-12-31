#               * 
#             * * 
#           * * * 
#         * * * * 
#       * * * * * 

n = int(input())
for i in range(1,n+1):
    print('{}{}'.format(' '*((n-i)*2),'* '*(i)))