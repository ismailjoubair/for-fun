#include <stdio.h>

int main() {
    int L;
    printf("Combien de lignes pour le triangle ? ");
    scanf("%d", &L);
    for (int i = 1; i <= L; i++){
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
