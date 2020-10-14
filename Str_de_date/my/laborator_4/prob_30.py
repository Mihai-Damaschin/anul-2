n = int(input("n= "))

a = [list(map(int, input().split())) for i in range(n)]

p = int(input("p= ")) - 1
q = int(input("q= ")) - 1

for i in range(n):
    if not i == p:
        for j in range(n):
            if not j == q:
                print('{} '.format(a[i][j]), end="")
        print()
