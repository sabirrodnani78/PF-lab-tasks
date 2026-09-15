#include <stdio.h>
int main() {
    int age;
    char day;
    float price;

    printf("Enter age:   ");
    scanf("%d", &age);

    printf("Enter day (W for weekday, H for weekend/holiday): ");
    scanf(" %c", &day);   

    if (age < 12 || age > 60) {
        if (day == 'W' || day == 'w') {
            price = 300.0;
        } else {
            price = 450.0;
        }
    } else {
        if (day == 'W' || day == 'w') {
            price = 500.0;
        } else {
            price = 750.0;
        }
    }

    printf("Ticket price: %.2f\n", price);
    return 0;
}
