#include <stdio.h>

int main (void) {

    int n;
    int suma;

    printf("Ingrese el tamanio de los arreglos: ");
    scanf("%d", &n);

    int a[n];
    int b[n];

    printf("Primer Arreglo\n");

    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor del arreglo %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Segundo Arreglo\n");

    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor del arreglo %d: ", i+1);
        scanf("%d", &b[i]);
    }

    suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma +(a[i] * b[i]);
    }

printf("El producto punto es: %d", suma);

    return 0;
}
