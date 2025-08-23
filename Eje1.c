# include <stdio.h>
# define N 10
int main ( void )
{
    int i;
    int a[N];

    printf("Transformador de negativo a positivo\n");
    for (i=1; i<=N; i++) {
        printf("Ingrese el numero Nro %d:\n", i);
        scanf("%d", &a[i]);
    }

    printf("Numeros cargados:\n");
    for (i=1; i<=N; i++) {
        printf("%d: %d\n", i, a[i]);
    }

    for (i=1; i<=N; i++) {
        if (a[i] < 0) {
            a[i] = (-1)*a[i];
        }
    }

    printf("Numeros arreglados:\n");
    for (i=1; i<=N; i++) {
        printf("%d: %d\n", i, a[i]);
    }

    return 0;
}