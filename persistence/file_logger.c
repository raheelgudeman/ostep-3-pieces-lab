#include <stdio.h>

int main() {
    FILE *file;

    printf("=== OSTEP Persistence Lab ===\n");

    file = fopen("log.txt", "a");

    if (file == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    fprintf(file, "Hello from the Persistence Lab!\n");

    fclose(file);

    printf("Message written to log.txt\n");

    return 0;
}
