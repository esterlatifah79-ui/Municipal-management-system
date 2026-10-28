#include <stdio.h>
#include "mfms.h"

void displayWelcome() {
    printf("Municipal Financial Management System\n");
}

void saveData() {
    FILE *file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(file, "Windhoek Municipality\n");
    fprintf(file, "Population: 486000\n");

    fclose(file);
    printf("Data saved successfully.\n");
}

void loadData() {
    FILE *file = fopen("data.txt", "r");
    char line[100];

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}