print("Prosty kalkulator")
print("Wpisz 0, aby zakończyć.\n")

while True:
    try:
        number1 = float(input("Podaj pierwszą liczbę: "))
        if number1 == 0:
            break
            
        number2 = float(input("Podaj drugą liczbę: "))
        if number2 == 0:
            break

        print(f"{number1} + {number2} = {number1 + number2}")
        print(f"{number1} - {number2} = {number1 - number2}")
        print(f"{number1} * {number2} = {number1 * number2}")
        
        if number2 != 0:
            print(f"{number1} / {number2} = {number1 / number2}")
        else:
            print("Błąd: Nie można dzielić przez zero!")
            
        print("-" * 20) # Oddzielenie dla czytelności
        
    except ValueError:
        print("To nie jest prawidłowa liczba! Spróbuj ponownie.")