mylist = []

for x in range(ord('a'), ord('e') + 1):
    print("Introdu numarul {}".format(chr(x)))
    mylist.append(int(input()))

mylist.sort()

print("Al doilea numar din stinga este: {}".format(mylist[1]))
