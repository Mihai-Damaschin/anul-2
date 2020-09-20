print("n = ", end="")
n = int(input())

if 0 < n < 27:
    print('Litera corespunzatoare este {}'.format(chr(64+n)))
else:
    print('Nu exista o litera corespunzatoare')
