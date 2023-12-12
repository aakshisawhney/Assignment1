#include <stdio.h>

void findBooks(int n, int costs[], int totalAmount) {
    int pairFound = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (costs[i] + costs[j] == totalAmount) {
                printf("Pair found (%d, %d)\n", costs[i], costs[j]);
                pairFound = 1;
                return;
            }
        }
    }

    if (!pairFound) {
        printf("-1\n");
    }
}
int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    int costs[n];
    printf("Enter the costs of the books: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &costs[i]);
    }

    int totalAmount;
    printf("Enter the total amount: ");
    scanf("%d", &totalAmount);

    findBooks(n, costs, totalAmount);

    return 0;
}
