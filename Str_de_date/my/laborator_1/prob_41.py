print("Introduceti un numar intreg: ", end="")
n = int(input())

print("Numarul rasturnat este : ", end="")
while (n > 0):
    print(n % 10, end="")
    n //= 10

print()