#include <stdio.h>

typedef struct {
    int x, y;
} Point;

int main(void) {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    Point p1 = {x1, y1};
    Point p2 = {x2, y2};

    int distance = (p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y);

    printf("%d\n", distance);

    return 0;
}
