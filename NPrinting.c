#include <stdio.h>
#include <conio.h>

void firstNatural(int current, int num) {
    if (current > num) {
        return; // Base case: stop when current exceeds num
    }

    printf("%d ", current); // Print the current natural number
    firstNatural(current + 1, num); // Recursively call for the next number
}

int main() {
    int num;
    printf("Enter the number of natural numbers to print: ");
    scanf("%d", &num);
    
    if (num < 1) {
        printf("Invalid input. Please enter a positive number.\n");
    } else {
        printf("Natural Numbers:\n");
        firstNatural(1, num);
    }

    getch(); // Wait for a key press
    return 0;
}
