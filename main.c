#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int* nums = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    
    int somma = 0;
    for (int i = 0; i < n; i++) {
        somma += nums[i];
    }

    printf("%d\n", somma);

    return 0;
}
