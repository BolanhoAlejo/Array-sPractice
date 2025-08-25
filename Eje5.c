#include <stdio.h>

void suma(int n, int a[n], int b[n]);

int main (void) {

    int n;

    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d", &n);

    int a[n];
    int b[n];

    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor del arreglo %d: ", i+1);
        scanf("%d", &a[i]);
    }

    suma(n, a, b);

    for (int i = 0; i < n; i++) {
        printf("%d. %d\n", i, b[i]);
    }

    return 0;
}

void suma(int n, int a[n], int b[n]) {

    int s=0;

    for (int i = 0; i < n; i++) {
        s=s+a[i];
        b[i]=s;
    }
}
