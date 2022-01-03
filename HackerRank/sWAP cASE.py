def swap_case(s):
    ans = []
    for i in s:
        if i.isupper():
            ans.append(i.lower())
        else:
            ans.append(i.upper())
    txt = ''.join(ans)
    return txt

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)