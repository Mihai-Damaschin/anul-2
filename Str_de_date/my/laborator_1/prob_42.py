import sys

INT_BIT = sys.getsizeof(int())

print("m= ", end="")
m = int(input())
print("n= ", end="")
n = int(input())

print("Numarul mai mare este {}".format(m-((m-n) & ((m-n) >> INT_BIT * 8 - 1))))
