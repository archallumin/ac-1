a = str(input())
x = 0
y = 0

x += a.count("a")
x += a.count("e")
x += a.count("i")
x += a.count("o")
x += a.count("u")
y += a.count("a")
y += a.count("e")
y += a.count("i")
y += a.count("o")
y += a.count("u")
y += a.count("y")

print(x, y)
