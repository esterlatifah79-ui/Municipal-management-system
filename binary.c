#include <stdio.h>

int main() {
    int number = 100, result = 0;
    FILE *file;

    file = fopen("data.bin", "wb");

    if (file == NULL) {
        printf("Cannot write file.\n");
        return 1;
    }

    fwrite(&number, sizeof(int), 1, file);
    fclose(file);

    file = fopen("data.bin", "rb");

    if (file == NULL) {
        printf("Cannot read file.\n");
        return 1;
    }

    fread(&result, sizeof(int), 1, file);
    fclose(file);

    printf("Saved number: %d\n", result);

    return 0;
}