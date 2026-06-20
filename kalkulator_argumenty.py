import sys

def usage(program_name):
    print(f"Sposób użycia: python {program_name} <liczba1> <operacja> <liczba2>")
    print("Dostępne operacje: add, sub, mul, div")

def main():
    if len(sys.argv) != 4:
        usage(sys.argv[0])
        sys.exit(1)

    try:
        number1 = int(sys.argv[1])
        operation = sys.argv[2]
        number2 = int(sys.argv[3])
    except ValueError:
        print("Błąd: Pierwszy i trzeci argument muszą być liczbami!")
        sys.exit(1)

    if operation == "add":
        print(f"{number1} + {number2} = {number1 + number2}")
    elif operation == "sub":
        print(f"{number1} - {number2} = {number1 - number2}")
    elif operation == "mul":
        print(f"{number1} * {number2} = {number1 * number2}")
    elif operation == "div":
        if number2 == 0:
            print("Błąd: Nie można dzielić przez zero!")
            sys.exit(1)
        print(f"{number1} / {number2} = {number1 / number2}")
    else:
        print(f"Błąd: Nieznana operacja '{operation}'")
        usage(sys.argv[0])

if __name__ == "__main__":
    main()
