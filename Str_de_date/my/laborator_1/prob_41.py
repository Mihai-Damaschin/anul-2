import sys

INT_BIT = sys.getsizeof(int())

print("a= ", end="")
a = int(input())
print("b= ", end="")
b = int(input())

print("Numarul mai mic este {}".format(b+((a-b) & ((a-b) >> INT_BIT * 8 - 1))))