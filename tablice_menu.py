def print_array(arr):
    for i, val in enumerate(arr):
        print(f"array[{i}] = {val}")

def menu():
    print("\n1. Wpisz nowe wartości do tablicy")
    print("2. Wyświetl zawartość tablicy")
    print("3. Znajdź wartość minimalną")
    print("4. Znajdź wartość maksymalną")
    print("5. Oblicz wartość średnią")
    print("0. WYJŚCIE")
    return input("Wybierz opcję: ")

def main():
    array = [1, 2, 3, -4, 50, 6, 7, 8, 9, 10]
    print("--- PROSTA TABLICA ---")

    while True:
        option = menu()

        if option == '0':
            break
            
        elif option == '1':
            print(f"\nWprowadź {len(array)} nowych wartości:")
            for i in range(len(array)):
                try:
                    array[i] = int(input(f"array[{i}] = "))
                except ValueError:
                    print("Błąd! To nie jest liczba. Wstawiam 0.")
                    array[i] = 0
                    
        elif option == '2':
            print("\nZawartość tablicy:")
            print_array(array)
            
        elif option == '3':
            print(f"\nMinimalna wartość: {min(array)}")
            
        elif option == '4':
            print(f"\nMaksymalna wartość: {max(array)}")
            
        elif option == '5':
            avg = sum(array) / len(array)
            print(f"\nŚrednia wartość: {avg:.2f}")
            
        else:
            print("\nWybierz poprawną opcję...")

    print("\nKONIEC PROGRAMU!")

if __name__ == "__main__":
    main()