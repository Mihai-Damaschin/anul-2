n = int(input("n= "))

a = ""
for i in range(n):
    a += input() + " " if i < n-1 else input()

a = sorted(list(map(int, a.split(" "))))

# am creat totusi o matrice pentru frumusete ca e tema cu matrici,
# dar as fi taiat vreo jumatate din codu asta sa nu fi fost obligat sa fac prin matrici
sorted_matrix = [[0 for j in range(n)] for i in range(n)]
k = 0
for i in range(n):
    for j in range(n):
        sorted_matrix[i][j] = a[k]
        k += 1

print("\na)")
for i in range(n):
    for j in range(n):
        print('{} '.format(sorted_matrix[i][j if i % 2 == 0 else n - 1 - j]), end="")
    print()

print("\nb)")
b = [[0 for j in range(n)] for i in range(n)]
a_counter = 0
for k in range(n):
    i = 0
    while i <= k:
        if k % 2 == 0:
            b[n - (k - i) - 1][n - i - 1] = a[len(a) - a_counter - 1]
            b[k - i][i] = a[a_counter]
        else:
            if k != n - 1:
                b[n - i - 1][n - (k - i) - 1] = a[len(a) - a_counter - 1]
            b[i][k - i] = a[a_counter]
        i += 1
        a_counter += 1

for i in range(n):
    for j in range(n):
        if b[i][j] < 10:
            print(" {} ".format(b[i][j]), end="")
        else:
            print("{} ".format(b[i][j]), end="")
    print()

c = [[0 for j in range(n)] for i in range(n)]
new_n = n - 1
sorted_item = 0
i = new_n
j = new_n

for i in range(new_n, -1, -1):
    c[i][j] = a[sorted_item]
    sorted_item += 1

for iteration in range(new_n - 1, -1, -1):
    if iteration % 2 == 0:
        for k  in range(iteration + 1):
            j += 1
            c[i][j] = a[sorted_item]
            sorted_item += 1
        for k  in range(iteration + 1):
            i -= 1
            if i < 0:
                i += 1
                break
            c[i][j] = a[sorted_item]
            sorted_item += 1
    if iteration % 2 == 1:
        for k  in range(iteration + 1):
            j -= 1
            if j < 0:
                j += 1
                break
            c[i][j] = a[sorted_item]
            sorted_item += 1
        for k  in range(iteration + 1):
            i += 1
            c[i][j] = a[sorted_item]
            sorted_item += 1

print("\nc)")
for i in range(n):
    for j in range(n):
        if c[i][j] < 10:
            print(" {} ".format(c[i][j]), end="")
        else:
            print("{} ".format(c[i][j]), end="")
    print()
