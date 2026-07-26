#include <stdio.h>

int main(void) {
    int nums[5] = {0};
    int best = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);

        if (i == 0 || nums[i] > best) {
            best = nums[i];
        }
    }

    printf("%d\n", best);

    return 0;
}
