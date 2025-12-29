#include <stdio.h>

int main() {
    FILE *file;
    char title[100];
    char features[500];
    char usage[500];

    file = fopen("README.md", "w");

    if (file == NULL) {
        printf("File creation failed\n");
        return 1;
    }

    printf("Enter Project Title: ");
    fgets(title, sizeof(title), stdin);

    printf("Enter Project Features: ");
    fgets(features, sizeof(features), stdin);

    printf("Enter Project Usage: ");
    fgets(usage, sizeof(usage), stdin);

    fprintf(file, "# %s\n", title);
    fprintf(file, "## Features\n");
    fprintf(file, "- %s\n", features);
    fprintf(file, "## Usage\n");
    fprintf(file, "%s\n", usage);

    fclose(file);

    printf("README.md generated successfully\n");

    return 0;
}
