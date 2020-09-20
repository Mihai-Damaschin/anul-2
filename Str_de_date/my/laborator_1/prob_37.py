print("Introduceti o litera din alfabet: ", end="")
n = input()
n_ascii = ord(n) - 64

print("Numarul de ordine din alfabet este {}".format(n_ascii if n_ascii < 27 else n_ascii - 32))

print()
