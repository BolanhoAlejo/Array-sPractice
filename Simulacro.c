#include <stdio.h>
#define N 10

int cuantos_valores(int, int);
void cargar(int[], float[], int);
void clasificar(float[], char[], int);
void imprimir(int[], float[], char[], int);

int main (void) {

    int n;
    int cod[N] = {0};
    float diametro[N] = {0};
    char estado[N] = {0};

    n = cuantos_valores(0, N);

    cargar(cod, diametro, n);

    clasificar(diametro, estado, n);

    imprimir(cod, diametro, estado, n);

    return 0;
}

int cuantos_valores(int a, int) {
    int n;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    if (n<a || n>N) {
        while (n<a || n>N) {
            printf("Ingrese un valor entre los limites: ");
            scanf("%d", &n);
        }
    }
    return n;
}

void cargar(int cod[], float diametro[], int n) {

    for (int i=0; i<n; i++) {
        printf("Cargar codigo del fierro [%d]: ", i+1);
        scanf("%d", &cod[i]);
        printf("Cargar diametro del fierro [%d]: ", i+1);
        scanf("%f", &diametro[i]);
    }

}

void clasificar(float diametro[], char estado[], int n) {
    for (int i=0; i<n; i++) {
        if (diametro[i]<0) {
            estado[i] = 'e';
        }else if (diametro[i]>10) {
            estado[i] = 'b';
        }else {
            estado[i] = 'm';
        }
    }
}

void imprimir(int cod[], float diametro[], char estado[], int n) {
    for (int i=0; i<n; i++) {
        printf("Codigo: %d ", cod[i]);
        printf("Diametro: %.2f ", diametro[i]);
        switch (estado[i]) {
            case 'm': printf("Estado: Malo\n");
                break;
            case 'e': printf("Estado: Error\n");
                break;
            case 'b': printf("Estado: Bueno\n");
                break;
            default: printf("Estado: Desconocido\n");
        }
    }
}