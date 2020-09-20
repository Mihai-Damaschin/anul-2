print("Introduceti un numar intreg: ", end="")
n = int(input())

money_values = [1000, 500, 200, 100, 50, 20, 10, 5, 1]

print("Suma introdusa poate fi descompusa in urmatoarele bancnote")
while n > 0:
    for value in money_values:
        # operatoru // ia partea intreaga de la impartire
        if n//value > 0:
            print("{} x {} lei".format(n//value, value))
        n %= value
