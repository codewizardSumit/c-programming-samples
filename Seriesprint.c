#include <stdio.h>

int main() {
    long int n, i, num = 0, sum = 0;
    
    // Input the value of 'n' from the user
    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer for 'n'.\n");
        return 1;  // Exit with an error code
    }

    // Calculate and display the series
    for (i = 1; i <= n; i++) {
        num = num * 10 + 1;  // Generate the next term in the series
        printf("%d", num);

        if (i < n) {
            printf(" + ");
        }

        sum += num;  // Add the current term to the sum
    }

    // Display the sum of the series
    printf(" = %d\n", sum);

    return 0;
}
