import math


def show_if_not_prime(number):
    for x in range(2, number):
        if number % x == 0:
            return print('{} '.format(number), end='')


print("Introduceti un numar intreg: ", end="")
n = int(input())

for i in range(1, int(math.sqrt(n))):
    if n % i == 0:
        show_if_not_prime(i)
        show_if_not_prime(n//i)

print()
