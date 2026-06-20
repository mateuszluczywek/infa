#include <stdio.h>

int main() {
    printf("Prosty kalkulator\n");
    printf("Wpisz 0 jako pierwsza lub druga liczbe, aby zakonczyc.\n");

    while (1) {
        float number1 = 0;
        printf("\nPodaj pierwsza liczbe: ");
        // Pobieramy liczbę i sprawdzamy, czy to zero
        if (scanf("%f", &number1) != 1 || number1 == 0) {
            break;
        }

        float number2 = 0;
        printf("Podaj druga liczbe: ");
        if (scanf("%f", &number2) != 1 || number2 == 0) {
            break;
        }

        // Wyświetlanie wyników (.2f zaokrągla do dwóch miejsc po przecinku)
        printf("%.2f + %.2f = %.2f\n", number1, number2, number1 + number2);
        printf("%.2f - %.2f = %.2f\n", number1, number2, number1 - number2);
        printf("%.2f * %.2f = %.2f\n", number1, number2, number1 * number2);
        
        // Zabezpieczenie przed dzieleniem przez zero
        if (number2 != 0) {
            printf("%.2f / %.2f = %.2f\n", number1, number2, number1 / number2);
        } else {
            printf("Blad: Nie mozna dzielic przez zero!\n");
        }
    }

    printf("Koniec dzialania programu.\n");
    return 0;
}