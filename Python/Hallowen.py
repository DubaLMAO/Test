def main():
    palabra = input()  # Leer la palabra
    objetivo = 'e'     # Carácter que queremos contar
    palabra_lower = palabra.lower()  # Convertir toda la palabra a minúsculas
    contador = palabra_lower.count(objetivo)  # Usar el método count()

    print(contador)

if __name__ == "__main__":
    main()
