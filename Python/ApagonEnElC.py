def _main():
    t = int(input())  # Número de casos de prueba
    for _ in range(t):
        # Lectura de datos para Daniel y Mabel
        p1, t1 = map(int, input().split())  # Datos de Daniel
        p2, t2 = map(int, input().split())  # Datos de Mabel

        # Comparación según las reglas
        if p1 > p2 or (p1 == p2 and t1 < t2):
            print("DANIEL")
        elif p2 > p1 or (p1 == p2 and t2 < t1):
            print("MABEL")
        else:
            print("EMPATE")

if __name__ == '__main__':
    _main()
