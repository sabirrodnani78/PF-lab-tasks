#include <stdio.h>

int main() {
    int category, item;

    printf("--- Restaurant Menu ---\n");
    printf("1. Beverages\n");
    printf("2. Main Course\n");
    printf("3. Desserts\n");
    printf("Select a category: ");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("\nBeverages:\n");
            printf("1. Coffee\n");
            printf("2. Tea\n");
            printf("3. Soda\n");
            printf("Select an item: ");
            scanf("%d", &item);

            switch (item) {
            case 1:
            printf("Coffee - Rs. 100\n");
            break;
            case 2:
            printf("Tea - Rs. 80\n");
            break;
            case 3:
            printf("Soda - Rs. 110\n");
            break;
            default:
            printf("Invalid item.\n");
            }
            break;

        case 2:
            printf("\nMain Course:\n");
            printf("1. Chicken Biryani\n");
            printf("2. Beef Burger\n");
            printf("3. Vegetable Pasta\n");
            printf("Select an item: ");
            scanf("%d", &item);

            switch (item) {
                case 1:
                printf("Chicken Biryani - Rs. 160\n");
                break;
                case 2:
                printf("Beef Burger - Rs. 250\n");
                break;
                case 3:
                printf("Vegetable Pasta - Rs. 300\n");
                break;
                default:
                printf("Invalid item.\n");
            }
            break;

        case 3:
            printf("\nDesserts:\n");
            printf("1. Chocolate Cake\n");
            printf("2. Ice Cream\n");
            printf("3. Fruit Custard\n");
            printf("Select an item: ");
            scanf("%d", &item);

            switch (item) {
          case 1:
          printf("Chocolate Cake - Rs. 150\n");
          break;
         case 2:
         printf("Ice Cream - Rs. 130\n");
         break;
         case 3:
         printf("Fruit Custard - Rs. 150\n");
         break;
        default:
        printf("Invalid item.\n");
    }
        break;
        default:
            printf("Invalid category.\n");
    }
    return 0;
}
