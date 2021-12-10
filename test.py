txt = input()
sl = input()
for i in txt:
    if len(sl) == 1:
        print(i,end='')
        if (i == sl):
            print(f'\n{i}',end='')
    else:
           