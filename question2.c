#include <stdio.h>
#include <stdlib.h>

int isJumpingNumber(int num) {
    char numStr[4];
    sprintf(numStr, "%d", num);

    for (int i = 0; numStr[i + 1] != '\0'; i++) {
        if (abs(numStr[i] - numStr[i + 1]) != 1) {
            return 0; 
        }
    }
    return 1;
}


int findLargestJumpingNumber() {
    for (int num = 999; num >= 100; num--) {
        if (isJumpingNumber(num)) {
            return num;
        }
    }
    return -1; 
}

int main() {
    int largestJumpingNumber = findLargestJumpingNumber();

    if (largestJumpingNumber != -1) {
        printf("The largest three-digit jumping number is: %d\n", largestJumpingNumber);
    } else {
        printf("No three-digit jumping number found.\n");
    }

    return 0;
}
