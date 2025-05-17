import math

def chicharronera(a, b, c):
    discriminante = b**2 - 4*a*c

    if discriminante >= 0:

        raiz_discriminante = math.sqrt(discriminante)
        x1 = (-b + raiz_discriminante) / (2*a)
        x2 = (-b - raiz_discriminante) / (2*a)
    else:
        
        raiz_discriminante = math.sqrt(-discriminante)
        x1 = complex(-b / (2*a), raiz_discriminante / (2*a))
        x2 = complex(-b / (2*a), -raiz_discriminante / (2*a))
    
    return x1, x2

a = float(input())
b = float(input())
c = float(input())

x1, x2 = chicharronera(a, b, c)

print(f"{x1} {x2}")
