#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[100];

    fgets(buf, sizeof buf, stdin);

    int i = 0;
    while (buf[i] != '\n') {
        i++;
    }
    buf[i] = '\0';

    printf("%zu\n", strlen(buf));

    return 0;
}
