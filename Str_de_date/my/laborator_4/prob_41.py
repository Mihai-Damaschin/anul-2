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

# print("a)")
# for i in range(n):
#     for j in range(n):
#         print('{} '.format(sorted_matrix[i][j if i % 2 == 0 else n - 1 - j]), end="")
#     print()
# print()
#
# print("b)")
# b = [[0 for j in range(n)] for i in range(n)]
# a_counter = 0
# for k in range(n):
#     i = 0
#     while i <= k:
#         if k % 2 == 0:
#             b[n - (k - i) - 1][n - i - 1] = a[len(a) - a_counter - 1]
#             b[k - i][i] = a[a_counter]
#         else:
#             if k != n - 1:
#                 b[n - i - 1][n - (k - i) - 1] = a[len(a) - a_counter - 1]
#             b[i][k - i] = a[a_counter]
#         i += 1
#         a_counter += 1
#
# for i in range(n):
#     for j in range(n):
#         print("{} ".format(b[i][j]), end="")
#     print()

print("c)")
c = [[0 for j in range(n)] for i in range(n)]
new_n = n - 1
sorted_item = 0
for order_nr in range(n):
    if order_nr % 4 == 0:
        for i in range(n - order_nr):
            # print("c[{}][{}] = a[{}]".format(order_nr, new_n, order_nr))
            c[new_n - i][new_n] = a[sorted_item]
            sorted_item += 1
    if order_nr % 4 == 1:
        for i in range(n - order_nr):
            # print("c[{}][{}] = a[{}]".format(order_nr, new_n, order_nr))
            c[new_n - i][new_n] = a[sorted_item]
            sorted_item += 1

print()

for i in range(n):
    for j in range(n):
        if sorted_matrix[j][i] < 10:
            print(" {} ".format(c[i][j]), end="")
        else:
            print("{} ".format(c[i][j]), end="")
    print()
