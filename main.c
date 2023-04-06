#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    bool repeat = true;
    int randomNumber;
    int attempts = 1, estimate;

    srand(time(NULL));
    randomNumber = rand() % 21;
    while (repeat) {
        printf("Zadej číslo: ");
        scanf("%d", &estimate);
        if (estimate < randomNumber) {
            printf("Zadej VĚTŠÍ číslo\n");
            attempts++;
        } else {
            if (estimate > randomNumber) {
                printf("Zadej MENŠÍ číslo\n");
                attempts++;
            } else {
                printf("Uhodnuto na %d. pokus.", attempts);
                repeat = false;
            }
        }
    }
    return 0;
}
