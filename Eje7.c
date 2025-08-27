#include <stdio.h>
#define N 7

int main (void) {

    int temp[N];

    printf("Ingrese la temperatura de los ultimos 7 dias.\n");
    for (int i=0;i<N;i++) {
        printf("Ingrese la temperatura del dia [%d]:", i+1);
        scanf("%d", &temp[i]);
    }

    for (int i=N-1;i>=0;i--) {
        printf("La temperatura del dia [%d] es: %d\n", i+1, temp[i]);
    }

    return 0;
}
