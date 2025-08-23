#include <stdio.h>

int main (void)
{
    int n;
    int p, t, s=0, m=1;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        printf("Ingrese el numero Nro %d:", i);
        scanf("%d", &p);
        t=0;
        s=0;
        m=1;
        while(p>=1){
            t=p%10;
            p=p/10;
            s=s+t;
            m=m*t;
        }
        printf("Suma: %d, Multiplicacion: %d\n", s, m);
        if(s==m) {
            printf("El numero es espia!\n");
        }else {
            printf("El numero no es espia!\n");
        }
    }

    return 0;
}
