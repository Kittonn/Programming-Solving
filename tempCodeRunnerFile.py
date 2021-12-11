num,up,sym]
for i in ans:
    M.append(sum(ans[i]))
for i in range(len(n)):
    if len(n[i]) == max(M):
        print('{} ({})'.format(n[i],name[i]))