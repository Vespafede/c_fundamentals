#include <stdio.h>
#include <string.h>

int main(void) {
    int n;

    scanf("%d", &n);

    if (n % 15 == 0) {
        printf("FizzBuzz\n");
    } else if (n % 3 == 0) {
        printf("Fizz\n");
    } else if (n % 5 == 0) {
        printf("Buzz\n");
    } else {
        printf("%d\n", n);
    }

    return 0;
}
