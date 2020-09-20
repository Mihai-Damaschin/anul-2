import sys

INT_BIT = sys.getsizeof(int())

print("a= ", end="")
a = int(input())
print("b= ", end="")
b = int(input())

print("Numarul mai mare este {}".format(a-((a-b) & ((a-b) >> INT_BIT * 8 - 1))))
