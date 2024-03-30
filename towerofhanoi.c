#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("Tower of Hanoi solution:\n");
    towerOfHanoi(n, 'A', 'B', 'C');

    // Calculate and print the total number of moves
    unsigned long long totalMoves = (1ULL << n) - 1; // 2^n - 1
    printf("Total moves required: %llu\n", totalMoves);

    return 0;
}
