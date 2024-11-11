n, m, k = map(int, input().split())
locations = {tuple(map(int, input().split())) for _ in range(k)}

for i in range(1, n + 1):
    for j in range(1, m + 1):
        if (i, j) in locations:
            print('*', end='')
        else:
            print('.', end='')
    print()