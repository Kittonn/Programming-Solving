def split_and_join(line):
    txt='-'.join(list(line.split()))
    return txt


if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)