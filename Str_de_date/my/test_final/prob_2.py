m = int(input("m= "))

S = 0
while m > 0:

    if m % 10 != 0:
        S += m % 10
    m //= 10

print("S= {}".format(S))
