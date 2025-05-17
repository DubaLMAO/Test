cadena = input()

con = int(0)

for c in cadena:
    if c.isdigit():
        con += int(c)

print(con)