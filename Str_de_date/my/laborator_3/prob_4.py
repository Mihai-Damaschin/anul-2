cases = {
    0: 0,
    1: 1
}


def fibonacci(x):
    return cases[x] if x <= 1 else fibonacci(x-2) + fibonacci(x-1)


print("n= ", end="")
n = int(input())

for i in range(1, n+1):
    print("{} ".format(fibonacci(i)), end="")

print()
