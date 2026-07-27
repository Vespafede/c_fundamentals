#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d\n", &n);
    
    FILE* out = fopen("/tmp/clines.txt", "w");
    if (out == NULL) return 1;
    char buf[1024];
    for (int i = 0; i < n; i++) {
        if (fgets(buf, sizeof(buf), stdin) != NULL) {
            fputs(buf, out);
            // Ensure a trailing newline if missing
            size_t len = strlen(buf);
            if (len > 0 && buf[len-1] != '\n') fputc('\n', out);
        }
    }
    fclose(out);
    
    // Re-open and count lines.
    FILE* in = fopen("/tmp/clines.txt", "r");
    int count = 0;
    while (fgets(buf, sizeof(buf), in) != NULL) count++;
    fclose(in);
    printf("lines: %d\n", count);
    return 0;
}
