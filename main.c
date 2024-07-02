#include <stdio.h>
#include <math.h>
int countIntersectionPoints(double x1, double y1, double r1, double x2, double y2, double r2) {
    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (dist == 0 && r1 == r2) {
        return -1;  
    } else if (dist > r1 + r2 || dist < fabs(r1 - r2)) {
        return 0;  
    } else if (dist == r1 + r2 || dist == fabs(r1 - r2)) {
        return 1;  
    } else {
        return 2;  
    }
}

int main() {
    double x1, y1, r1, x2, y2, r2;
    printf("Введіть координати та радіус першого кола (x1, y1, r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Введіть координати та радіус другого кола (x2, y2, r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    int result = countIntersectionPoints(x1, y1, r1, x2, y2, r2);
    printf("Кількість точок перетину: %d\n", result);
    return 0;
}
