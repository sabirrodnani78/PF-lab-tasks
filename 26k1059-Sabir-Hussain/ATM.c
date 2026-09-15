#include <stdio.h>
int main() {
    int account, transaction;
    float amount, balance;

    printf("Select account type:\n");
    printf("1. Savings\n");
    printf("2. Current\n");
    scanf("%d", &account);
    
    switch (account) {
        case 1:
            printf("\n-- Savings Account --\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("Select transaction: ");
            scanf("%d", &transaction);

            switch (transaction) {
                case 1:
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    printf("Rs. %.2f deposited into Savings account.\n", amount);
                    break;
                case 2:
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    printf("Rs. %.2f withdrawn from Savings account.\n", amount);
                    break;
                case 3:
                    printf("Enter current balance on record: ");
                    scanf("%f", &balance);
                    printf("Savings Account Balance: Rs. %.2f\n", balance);
                    break;
            default:
            printf("Invalid transaction choice.\n");
            }
            break;

        case 2:
            printf("\n-- Current Account --\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("Select transaction: ");
            scanf("%d", &transaction);

            switch (transaction) {
                case 1:
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    printf("Rs. %.2f deposited into Current account.\n", amount);
                    break;
                case 2:
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    printf("Rs. %.2f withdrawn from Current account.\n", amount);
                    break;
                case 3:
                    printf("Enter current balance on record: ");
                    scanf("%f", &balance);
                    printf("Current Account Balance: Rs. %.2f\n", balance);
                break;
                default:
                printf("Invalid transaction choice.\n");
        }
            break;

        default:
        printf("Invalid account type.\n");
    }
    return 0;
}
