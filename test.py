#          P
#        y P y
#      t y P y t
#    h t y P y t h
#  o h t y P y t h o
#n o h t y P y t h o n
#                B
#              O B O
#            R O B O R
#          N R O B O R N
#        T N R O B O R N T
#      O T N R O B O R N T O
#    D O T N R O B O R N T O D
#  E D O T N R O B O R N T O D E
#V E D O T N R O B O R N T O D E V
'''
txt = 'Python'


for i in range(2,len(txt)*2+2,2):
    
    for j in range(len(txt)*2-i):
        print(' ',end='')
    for k in range(i//2-1,-1,-1):
        print('{} '.format(txt[k]),end='')
        
        
            
    
    print()'''

num = ['1','0']
txt = ''.join(num)
print(txt)