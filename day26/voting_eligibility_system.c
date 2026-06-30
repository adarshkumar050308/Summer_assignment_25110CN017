#include<stdio.h>

int main(void) {
    int numPeople;
    int age;
    int eligible = 0;
    int notEligible = 0;

    printf("Voting Eligibility System\n");
    printf("Enter number of people to check: ");
    if (scanf("%d", &numPeople) != 1 || numPeople <= 0) {
        printf("Invalid number of people.\n");
        return 1;
    }

    for (int i = 1; i <= numPeople; i++) {
        printf("Enter age for person %d: ", i);
        if (scanf("%d", &age) != 1) {
            printf("Invalid age input.\n");
            return 1;
        }

        if (age >= 18) {
            printf("Person %d is eligible to vote.\n", i);
            eligible++;
        } else {
            printf("Person %d is not eligible to vote.\n", i);
            notEligible++;
        }
    }

    printf("\nTotal eligible: %d\n", eligible);
    printf("Total not eligible: %d\n", notEligible);

    return 0;
}
