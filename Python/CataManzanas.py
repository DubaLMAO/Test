def main():
    tMan = int(input())  # Leemos el número objetivo
    CataMan = list(map(int, input().split()))  # Leemos los 5 números como una lista

    cont = 0  # Contador para coincidencias

    for num in CataMan:
        if tMan == num:
            cont += 1

    print(cont)

if __name__ == "__main__":
    main()
