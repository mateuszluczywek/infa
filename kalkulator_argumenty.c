#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *programName) {
    printf("Sposob uzycia: %s <liczba1> <operacja> <liczba2>\n", programName);
    printf("Dostepne operacje:\n");
    printf("\tadd (dodawanie)\n\tsub (odejmowanie)\n\tmul (mnozenie)\n\tdiv (dzielenie)\n");
}

int main(int argc, char* argv[]) {

    if (argc != 4) {
        usage(argv[0]);
        return 1;
    }

    int number1 = atoi(argv[1]);
    char* operation = argv[2];
    int number2 = atoi(argv[3]);
    int result = 0;

    if (strcmp("add", operation) == 0) {
        result = number1 + number2;
        printf("%d + %d = %d\n", number1, number2, result);
    } 
    else if (strcmp("sub", operation) == 0) {
        result = number1 - number2;
        printf("%d - %d = %d\n", number1, number2, result);
    } 
    else if (strcmp("mul", operation) == 0) {
        result = number1 * number2;
        printf("%d * %d = %d\n", number1, number2, result);
    } 
    else if (strcmp("div", operation) == 0) {
        if (number2 == 0) {
            printf("Blad: Nie mozna dzielic przez zero!\n");
            return 1;
        }
        result = number1 / number2;
        printf("%d / %d = %d\n", number1, number2, result);
    } 
    else {
        printf("Blad: Nieznana operacja '%s'\n", operation);
        usage(argv[0]);
        return 1;
    }

    return 0;
}
