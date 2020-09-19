mylist = []

# citeste de la consola
for x in range(ord('a'), ord('e') + 1):
    print("Introdu numarul {}".format(chr(x)))
    mylist.append(int(input()))

# sorteaza
mylist.sort()

# afiseaza al doilea element
print("Al doilea numar din stinga este: {}".format(mylist[1]))
