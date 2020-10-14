n = int(input("n= "))

a = [list(map(int, input().split())) for i in range(n)]

print("a)")
for i in range(n):
    for j in range(n):
        print('{} '.format(a[i][j if i % 2 == 0 else n - 1 - j]), end="")
    print()
print()

