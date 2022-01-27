n,cmd = map(int,input().split())
l = list(map(int,input().split()))
if cmd == 0:
    txt = ' '.join(str(i) for i in sorted(l))
    print(txt)
elif cmd == 1:
    l.sort(reverse=True)
    txt = ' '.join(str(i) for i in l)
    print(txt)