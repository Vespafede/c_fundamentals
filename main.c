#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int somma = 0;
    for (int i = 0; i <= n; i++) {
        somma += i;
    }

    printf("%d\n", somma);

    return 0;
}
