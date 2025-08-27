#include <stdio.h>
#define N 5

int main (void) {

    int vec[N];
    int prom=0;
    int posicion=0;

    for (int i=0;i<N;i++) {
        printf("Cargue la nota Nro %d: ", i+1);
        scanf("%d", &vec[i]);
        prom = prom + vec[i];
    }
    prom = prom/N;
    int max=vec[0];

    for (int i=0;i<N;i++) {
        if (max<vec[i]) {
            max=vec[i];
            posicion=i;
        }
    }

    printf("El promedio de notas es: %d\n", prom);
    printf("La nota maxima es: %d\n", max);
    printf("La posicion de la nota maximas es: %d\n", posicion+1);

    return 0;
}
