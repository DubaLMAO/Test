def main():
    n = int(input())  # Leer el número ingresado por el usuario
    suma = 0  # Inicializamos la suma en 0

    for i in range(1, n + 1):  # Iterar desde 1 hasta n (inclusive)
        if i % 2 == 0:  # Verificar si el número es par
            suma += i  # Sumar el número par a la suma

    print(f"La suma de los numeros pares entre 1 y {n} es: {suma}")

if __name__ == "__main__":
    main()
