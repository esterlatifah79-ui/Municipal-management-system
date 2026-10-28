#include <stdio.h>
#include "mfms.h"

int main() {
    int choice;

    displayWelcome();

    do {
        printf("\n1. Save Data\n");
        printf("2. Load Data\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                saveData();
                break;
            case 2:
                loadData();
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}