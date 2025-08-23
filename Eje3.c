#include <stdio.h>

int main (void)
{
    int p=1;

    for (int i = 1; i <= 10; i++) {
        printf("\n");
        for (int j = 1; j <= 10; j++) {
            printf("%d", p);
            p++;
        }
    }

    return 0;
}

