#include <stdio.h>

int main() {
int mark;

	printf("Enter marks (0-100): ");
    scanf("%d", &mark);
    if (mark < 0 || mark > 100) {
        printf("Invalid input.\n");
    } else {
        if (mark >= 90) {
            printf("Grade A\n");
            if (mark == 100) {
                printf("Perfect Score  \n");
            }
        } else if (mark >= 75) {
            printf("Grade B\n");
        } else if (mark >= 60) {
            printf("Grade C\n");
        } else if (mark >= 40) {
            printf("Grade D\n");
        } else {
            printf("Fail\n");
        }
    }
    return 0;
}
