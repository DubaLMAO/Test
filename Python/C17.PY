def main():
    monedas = [20, 10, 5, 2, 1]
    monto = int(input())

    for moneda in monedas:
        cantidad = monto // moneda
        monto %= moneda
        print(f"${moneda}: {cantidad}")

