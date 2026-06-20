#include <stdio.h>

int main() {
    printf("Prosty kalkulator\n");
    printf("Wpisz 0 jako pierwsza lub druga liczbe, aby zakonczyc.\n");

    while (1) {
        float number1 = 0;
        printf("\nPodaj pierwsza liczbe: ");
        if (scanf("%f", &number1) != 1 || number1 == 0) {
            break;
        }

        float number2 = 0;
        printf("Podaj druga liczbe: ");
        if (scanf("%f", &number2) != 1 || number2 == 0) {
            break;
        }

        printf("%.2f + %.2f = %.2f\n", number1, number2, number1 + number2);
        printf("%.2f - %.2f = %.2f\n", number1, number2, number1 - number2);
        printf("%.2f * %.2f = %.2f\n", number1, number2, number1 * number2);
        
        if (number2 != 0) {
            printf("%.2f / %.2f = %.2f\n", number1, number2, number1 / number2);
        } else {
            printf("Blad: Nie mozna dzielic przez zero!\n");
        }
    }

    printf("Koniec dzialania programu.\n");
    return 0;
}
