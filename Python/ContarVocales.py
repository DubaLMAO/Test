def main():
    vocales = ['a', 'e', 'i', 'o', 'u']
    conteo = [0] * 5  # contador para cada vocal

    palabra = input().strip()

    for c in palabra:
        c = c.lower()  # convertimos cada caracter en minúscula
        if c in vocales:
            conteo[vocales.index(c)] += 1

    print(*conteo)

if __name__ == "__main__":
    main()
