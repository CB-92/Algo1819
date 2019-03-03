#include <stdio.h>

int somma_dispari(int n) {
    if(n == 1) {
        return 1;
    }

    return (2 * n - 1) + somma_dispari(n-1);
}

int main(void) {
    int n;

    scanf("%i", &n);
    printf("%i", somma_dispari(n));

    return 0;
}
