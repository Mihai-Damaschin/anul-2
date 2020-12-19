a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
n = len(a)
k = 0


def max():
    local_max = a[0]
    for i in range(n):
        if a[i] > local_max:
            local_max = a[i]

    return local_max


def min():
    local_min = a[0]
    for i in range(n):
        if a[i] < local_min:
            local_min = a[i]

    return local_min


def ch():
    for i in range(n):
        for j in range(int(n / 2)):
            if a[j] < a[2 * j + 1]:
                aux = a[j]
                a[j] = a[2 * j + 1]
                a[2 * j + 1] = aux

            if a[j] < a[2 * j + 2]:
                aux = a[j]
                a[j] = a[2 * j + 2]
                a[2 * j + 2] = aux


def sd():
    global n
    heap = []

    print("Maxim: {}".format(a[0]), end="")
    while n:
        val = max()
        sort(val)

        if a[n - 1] == val:
            heap.append(a[n - 1])
            n -= 1

        if n == 0:
            print("Minim: {}".format(a[n]))

    for i in range(len(heap)):
        print("{} ".format(heap[i]), end="")
    print()


def sc():
    global n
    heap = []
    f = 0

    print("Maxim: {}".format(a[0]))
    while n:
        val = min()
        sort(val)

        if f == 0 and a[n - 1] == val:
            print("Minim: {}".format(a[n - 1]))

        if a[n - 1] == val:
            heap.append(a[n - 1])
            n -= 1
            f += 1

    for i in range(len(heap)):
        print("{} ".format(heap[i]), end="")
    print()


def p2():
    print("Care este indicele nodului parinte")
    print("Descendentii nodului carui doriti sa-i afisati?")
    poz = int(input("Pozitia ( >=0 )="))

    if poz >= 1:
        print("Parintele nodului {} este nodul: {}".format(a[poz], a[int(poz / 2)]))
    else:
        print("Nodul dat este radacina arborelui,nu are parinte.")

    if poz * 2 + 1 < n:
        print("Descendentul stang al nodoului {} este nodul {}".format(a[poz], a[poz * 2 + 1]))
    else:
        print("Acest nod nu are descendent stang")

    if poz * 2 + 2 < n:
        print("Descendentul drept al nodoului {} este nodul {}".format(a[poz], a[poz * 2 + 2]))
    else:
        print("Acest nod nu are descendent drept")


def sort(item):
    for i in range(n):
        if a[i] == item and i != n - 1:
            aux = a[0]
            a[0] = a[i]
            a[i] = aux
    aux = a[0]
    a[0] = a[n - 1]
    a[n - 1] = aux


print("vectorul initial:")
for i in range(n):
    print("{} ".format(a[i]), end="")
print()

print("1)")
print("Vectorul heap")
ch()
for i in range(n):
    print("{} ".format(a[i]), end="")
print()

print("2)")
p2()

print("3)")
print("Alegeti optiunea cu cifra respectiva")
print("1.Sortare descrescatoare")
print("2.Sortare crescatoare")
op = int(input("Optiune: "))
cases = {
    1: sd,
    2: sc
}
cases[op]()
