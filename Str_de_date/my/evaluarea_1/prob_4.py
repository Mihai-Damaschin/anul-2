def who_got_friends(a):
    print('Persoanele ce au cel putin doi prieteni sunt')
    for i in range(n):
        sum = 0
        for j in range(n):
            if a[i][j] == 1:
                sum += 1
        sum >= 2 and print("{} ".format(i + 1), end="")
    print()


n = int(input("n= "))

a = ""
for i in range(n):
    a += input() + " " if i < n-1 else input()

a = list(map(int, a.split(" ")))

my_array = [[0 for j in range(n)] for i in range(n)]
k = 0
for i in range(n):
    for j in range(n):
        my_array[i][j] = a[k]
        k += 1


who_got_friends(my_array)