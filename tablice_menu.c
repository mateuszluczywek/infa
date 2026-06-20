#include <stdio.h>
#define SIZE 10

// Funkcja wyswietlajaca tablice
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

// Funkcja szukajaca minimum
int findMinimum(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

// Funkcja szukajaca maksimum
int findMaximum(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// Funkcja liczaca sume
int calculateSum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

// Funkcja liczaca srednia
float calculateAverage(int array[], int size) {
    return (float)calculateSum(array, size) / size;
}

// Funkcja wyswietlajaca menu
void menu() {
    printf("\n1. Wpisz nowe wartosci do tablicy\n");
    printf("2. Wyswietl zawartosc tablicy\n");
    printf("3. Znajdz wartosc minimalna\n");
    printf("4. Znajdz wartosc maksymalna\n");
    printf("5. Oblicz wartosc srednia\n");
    printf("0. WYJSCIE\n");
    printf("Wybierz opcje: ");
}

int main() {
    int array[SIZE] = {1, 2, 3, -4, 50, 6, 7, 8, 9, 10};
    int option = 0;

    printf("--- PROSTA TABLICA ---\n");

    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 0:
                break;
            case 1:
                printf("\nWprowadz %d nowych wartosci:\n", SIZE);
                for(int i = 0; i < SIZE; i++) {
                    printf("array[%d] = ", i);
                    scanf("%d", &array[i]);
                }
                break;
            case 2:
                printf("\nZawartosc tablicy:\n");
                printArray(array, SIZE);
                break;
            case 3:
                printf("\nMinimalna wartosc: %d\n", findMinimum(array, SIZE));
                break;
            case 4:
                printf("\nMaksymalna wartosc: %d\n", findMaximum(array, SIZE));
                break;
            case 5:
                printf("\nSrednia wartosc: %.2f\n", calculateAverage(array, SIZE));
                break;
            default:
                printf("\nWybierz poprawna opcje...\n");
        }

    } while (option != 0);

    printf("\nKONIEC PROGRAMU!\n");
    return 0;
}