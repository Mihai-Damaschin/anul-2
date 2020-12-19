import random
import types


def print_matrix(matrix, length):
    print(" Nr", end="")
    for j in range(length):
        correct_print(j)
    print()
    for i in range(length):
        correct_print(i)
        for j in range(length):
            correct_print(matrix[i][j])
        print()


def correct_print(value):
    if 9 < value or value < 0:
        print("{} ".format(value), end="")
    else:
        print(" {} ".format(value), end="")


n = int(input("n= "))
main_array = [[random.randint(-1, 0) for column in range(n)] for row in range(n)]

print_matrix(main_array, n)

print("Pozitia soarelui:")
types.sun["x"] = int(input("x= "))
types.sun["y"] = int(input("y= "))

i = types.sun["x"]
j = types.sun["y"]
main_array[i][j] = 1

vc = sfc = 0
tail = [{"x": i, "y": j}]

while "Lumea crede in Isus":
    state = 0

    if (i - 1 >= 0) and (main_array[i - 1][j] == 0):
        main_array[i - 1][j] = main_array[i][j] + 1
        sfc += 1
        tail.append({"x": i - 1, "y": j})
        state += 1

    if (i + 1 < n) and (main_array[i + 1][j] == 0):
        main_array[i + 1][j] = main_array[i][j] + 1
        sfc += 1
        tail.append({"x": i + 1, "y": j})
        state += 1

    if (j - 1 >= 0) and (main_array[i][j - 1] == 0):
        main_array[i][j - 1] = main_array[i][j] + 1
        sfc += 1
        tail.append({"x": i, "y": j - 1})
        state += 1

    if (j + 1 < n) and (main_array[i][j + 1] == 0):
        main_array[i][j + 1] = main_array[i][j] + 1
        sfc += 1
        tail.append({"x": i, "y": j + 1})
        state += 1

    if not state:
        if main_array[i][j] > types.answer["value"]:
            types.answer = {
                "value": main_array[i][j],
                "x": i,
                "y": j
            }
        vc += 1
        if vc > sfc:
            break
        i = tail[vc]["x"]
        j = tail[vc]["y"]

print("Matricea rezolvata")
print_matrix(main_array, n)

print("Pozitia finala este: [{}, {}]".format(types.answer["x"], types.answer["y"]))
