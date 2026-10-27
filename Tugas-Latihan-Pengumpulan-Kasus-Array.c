#include <stdio.h>

int main() {
    int a;
    char array[10];

    printf("Masukan jumlah/isi array: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        printf("Masukan index ke-%d: ", i);
        scanf(" %c", &array[i]);
    }

    for (int i = 0; i < a; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");

    return 0;
}