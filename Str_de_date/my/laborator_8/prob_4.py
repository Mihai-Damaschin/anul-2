n = int(input("n= "))

S = 0

for i in range(n):
    S += i / ((2 * i - 1) * (2 * i + 1))

print("S= {}".format(S))


