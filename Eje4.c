#include <stdio.h>

int main (void)
{
    int f, c;
    int p=1;

    printf("Ingrese el numero de filas:");
    scanf("%d", &f);
    printf("Ingrese el numero de columnas:");
    scanf("%d", &c);

    for (int i = 1; i <= f; i++) {
        printf("\n");
        for (int j = 1; j <= c; j++) {
            printf("|%3d|", p);
            p++;
        }
    }

    return 0;
}

