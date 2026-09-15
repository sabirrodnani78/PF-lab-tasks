#include <stdio.h>
int main() {
    char light, button;

    printf("Enter traffic light color (R - Red, Y - Yellow, G - Green): ");
    scanf(" %c", &light);

    switch (light) {
        case 'R':
        case 'r':
            printf("Has the pedestrian button been pressed? (Y/N): ");
            scanf(" %c", &button);

        switch (button) {
        case 'Y':
        case 'y':
                printf("Stop. Pedestrians may cross.\n");
                break;
        case 'N':
        case 'n':
                printf("Stop and wait.\n");
                break;
                default:
                printf("Invalid input for pedestrian button.\n");
            }
            break;

        case 'Y':
        case 'y':
            printf("Slow down, prepare to stop.\n");
            break;

        case 'G':
        case 'g':
            printf("Has the pedestrian button been pressed? (Y/N): ");
            scanf(" %c", &button);

            switch (button) {
        case 'Y':
        case 'y':
                    printf("Go, but watch for pedestrians.\n");
                    break;
        case 'N':
        case 'n':
                    printf("Go.\n");
                    break;
                default:
            printf("Invalid input for pedestrian button.\n");
            }
        break;
        default:
            printf("Invalid light color.\n");
    }
    return 0;
}
