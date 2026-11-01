
#include <stdio.h>

struct Expense {
    char category[30];
    float amount;
};

int main() {
    struct Expense e[100];
    int choice, count = 0;
    float total = 0;

    do {
        printf("\n===== PERSONAL EXPENSE TRACKER =====\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Total Expenses\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter category: ");
                    scanf(" %29s", e[count].category);

                    printf("Enter amount: ");
                    scanf("%f", &e[count].amount);

                    total += e[count].amount;
                    count++;

                    printf("Expense added successfully!\n");
                } else {
                    printf("Expense limit reached!\n");
                }
                break;

            case 2:
                printf("\n--- Expense Details ---\n");
                for (int i = 0; i < count; i++) {
                    printf("%s : Rs. %.2f\n",
                           e[i].category, e[i].amount);
                }
                break;

            case 3:
                printf("Total Expenses: Rs. %.2f\n", total);
                break;

            case 4:
                printf("Thank you for using the tracker!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
