#include <stdio.h>

int main() {
    int n, i, j;

    // Input the value of 'n' from the user
    printf("Enter the number of lines (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for 'n'.\n");
        return 1;  // Exit with an error code
    }

    // Loop through each line
    for (i = 0; i < n; i++) {
        // Print leading underscores
        for (j = 0; j < i; j++) {
            printf("_");
        }

        // Print asterisks
        for (j = 0; j < n - i; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
