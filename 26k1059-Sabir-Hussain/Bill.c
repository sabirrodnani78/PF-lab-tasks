#include <stdio.h>
int main() {
    int units;
    char type;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);
    printf("Enter connection type (D for domestic, C for commercial): ");
    scanf(" %c", &type);


    if (type == 'D' || type == 'd') {
        if (units <= 100) {
            bill = units * 3.0;
        } else if (units <= 300) {
            bill = 100 * 3.0 + (units - 100) * 5.0;
        } else {
            bill = 100 * 3.0 + 200 * 5.0 + (units - 300) * 7.0;
    }
    } else if (type == 'C' || type == 'c') {
        if (units <= 100) {
            bill = units * 6.0;
        } else if (units <= 300) {
            bill = 100 * 6.0 + (units - 100) * 9.0;
        } else {
            bill = 100 * 6.0 + 200 * 9.0 + (units - 300) * 12.0;
        }
    } else {
        printf("Invalid connection type.\n");
        return 1;
    }
    printf("Total bill: %.2f\n", bill);
    return 0;
}
