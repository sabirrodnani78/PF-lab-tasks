#include <stdio.h>
int main() {
    int x, y, z, w;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &x, &y, &z, &w);

    if (x > y) {
        if (x > z) {
         if (x > w) {
                printf("Largest = %d\n", x);
          } else {
                printf("Largest = %d\n", w);
         }
        } else {
    		if (z > w) {
                printf("Largest = %d\n", z);
            } else {
            printf("Largest = %d\n", w);
            }
        }
    } else {
    if (y > z) {
         if (y > w) {
             printf("Largest = %d\n", y);
            } else {
            printf("Largest = %d\n", w);
            }
        } else {
            if (z > w) {
                printf("Largest = %d\n", z);
            } else {
                printf("Largest = %d\n", w);   }
        }  }
    return 0;
}
