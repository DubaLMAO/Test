def main():
    # Leer n mientras no sea menor o igual a 0
    while True:
        n = int(input())
        if n > 0:
            break

    precios = []
    error = False

    # Leer los precios
    for i in range(n):
        precio = int(input())
        if precio <= 0:
            print("Error en el precio ingresado.")
            error = True
            break
        precios.append(precio)

    # Si no hubo errores, ordenar e imprimir los precios de mayor a menor
    if not error:
        precios.sort(reverse=True)
        print(" ".join(map(str, precios)))

if __name__ == "__main__":
    main()
