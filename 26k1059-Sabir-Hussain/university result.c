#include <stdio.h>
int main() {
    char dept;
    int semester;

    printf("Select department (C - Computer Science, E - Electrical Engineering, B - Business): ");
    scanf(" %c", &dept);

    printf("Enter semester (1, 2, or 3): ");
    scanf("%d", &semester);

    switch (dept) {
        case 'C':
        case 'c':
        switch (semester) {
               case 1:
               printf("Core Course: Introduction to Programming\n");
               break;
               case 2:
               printf("Core Course: Data Structures\n");
               break;
               case 3:
               printf("Core Course: Database Systems\n");
               break;
               default:
               printf("Invalid semester.\n");
   }
        break;

        case 'E':
        case 'e':
        switch (semester) {
                case 1:
                printf("Core Course: Circuit Analysis\n");
                break;
                case 2:
                printf("Core Course: Electronics I\n");
                break;
                case 3:
                printf("Core Course: Signals and Systems\n");
                break;
                default:
                printf("Invalid semester.\n");
   }
        break;
        case 'B':
        case 'b':
        switch (semester) {
        case 1:
        printf("Core Course: Principles of Management\n");
        break;
        case 2:
        printf("Core Course: Financial Accounting\n");
        break;
        case 3:
        printf("Core Course: Marketing Fundamentals\n");
        break;
        default:
        printf("Invalid semester.\n");
        }
        break;
        default:
        printf("Invalid department.\n");
    }
    return 0;
}
