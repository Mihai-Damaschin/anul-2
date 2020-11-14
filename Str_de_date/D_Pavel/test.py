n = int(input("n= "))

a = [list(map(int, input().split())) for i in range(n)]

print("a)")

b = [[0 for x in range(n)] for y in range(n)]

for i in range(n):
    for j in range(n):
        if i < n/2 and j < n/2:
            b[i + int(n/2)][j + int(n/2)] = a[i][j]

        if i >= n/2 and j >= n/2:
            b[i - int(n/2)][j - int(n/2)] = a[i][j]

        if i >= n/2 > j:
            b[i - int(n/2)][j + int(n/2)] = a[i][j]

        if i < n/2 <= j:
            b[i + int(n/2)][j - int(n/2)] = a[i][j]

for i in range(n):
    for j in range(n):
        print('{} '.format(b[i][j]), end="")
    print()
