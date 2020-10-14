m = int(input("m= "))
n = int(input("n= "))

a = [list(map(int, input().split())) for i in range(n)]

min = {
    "value": a[0][0],
    "line": 0,
    "column": 0
}

for i in range(m):
    for j in range(n):
        if min["value"] > a[i][j]:
            min["value"] = a[i][j]
            min["line"] = i
            min["column"] = j

print('Cel mai mic element este {} pe lina {} si coloana {}'
      .format(min["value"], min["line"]+1, min["column"]+1))
