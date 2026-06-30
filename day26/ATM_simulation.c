#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double balance = 10000.00;
    int choice;
    double amount;

    while (1) {
        printf("\n=== ATM Simulation ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Select an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Current balance: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                if (scanf("%lf", &amount) != 1) {
                    printf("Invalid amount.\n");
                    while (getchar() != '\n');
                    break;
                }
                if (amount <= 0) {
                    printf("Deposit amount must be positive.\n");
                } else {
                    balance += amount;
                    printf("Deposited $%.2f. New balance: $%.2f\n", amount, balance);
                }
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                if (scanf("%lf", &amount) != 1) {
                    printf("Invalid amount.\n");
                    while (getchar() != '\n');
                    break;
                }
                if (amount <= 0) {
                    printf("Withdrawal amount must be positive.\n");
                } else if (amount > balance) {
                    printf("Insufficient funds.\n");
                } else {
                    balance -= amount;
                    printf("Withdrew $%.2f. New balance: $%.2f\n", amount, balance);
                }
                break;
            case 4:
                printf("Exiting ATM simulation.\n");
                return 0;
            default:
                printf("Invalid option. Please choose 1-4.\n");
        }
    }
}
