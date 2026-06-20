#include <stdio.h>

// Funkcja zamieniająca duże litery na małe
void toLower(char text[]) {
    int i = 0;
    while (text[i]) {
        if ('A' <= text[i] && text[i] <= 'Z') {
            text[i] += ('a' - 'A'); // Przesunięcie w tablicy ASCII
        }
        i++;
    }
}

// Funkcja zamieniająca małe litery na duże
void toUpper(char text[]) {
    int i = 0;
    while (text[i]) {
        if ('a' <= text[i] && text[i] <= 'z') {
            text[i] -= ('a' - 'A');
        }
        i++;
    }
}

// Funkcja mierząca długość tekstu
int textSize(char text[]) {
    int size = 0;
    while (text[size] != '\0') {
        size++;
    }
    return size;
}

int main() {
    char text[] = "Ala ma kota, a kot ma Ale.";
    
    printf("Oryginalny tekst: %s\n", text);
    
    toLower(text);
    printf("Male litery:       %s\n", text);
    
    toUpper(text);
    printf("Wielkie litery:    %s\n", text);
    
    printf("Dlugosc tekstu:    %d znakow\n", textSize(text));

    return 0;
}