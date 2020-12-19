def ab(x, y, z):
    return (y["y"] - y["y"]) * x["x"] + (z["x"] - z["x"]) * x["y"] + y["x"] * z["y"] - y["y"] * z["x"]


d = {
    "x": 0,
    "y": 0
}
f = 1

n = int(input("n= "))
a = [{"x": 0, "y": 0} for i in range(n)]

print("Introduceti coordonatele punctelor")
for i in range(n):
    a[i]["x"] = int(input("{}.x= ".format(i)))
    a[i]["y"] = int(input("{}.y= ".format(i)))

print("Coordonatele M:")
d["x"] = int(input("M.x= "))
d["y"] = int(input("M.y= "))

for i in range(n - 1):
    a.append(a[i])

for i in range(n):
    if ab(d, a[i], a[i + 1]) * ab(a[i + 2], a[i], a[i + 1]) <= 0:
        f = 0

print("Punctul nu apartine poligonului") if f else print("Punctul apartine poligonului")
