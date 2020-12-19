def cmmdc(a, b):
    if not b:
        return a
    return cmmdc(b, a%b)


m = int(input("m="))
n = int(input("n="))

if cmmdc(m, n) == 1:
    print("Fractia este ireductibila")
else:
    print("Fractia este reductibila")
