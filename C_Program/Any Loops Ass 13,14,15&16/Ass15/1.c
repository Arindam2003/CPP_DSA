#include <stdio.h>

int main() {
    int i, j, count;

    for (i = 2; i <= 100; i++) {
        count = 0; // Reset count for each i

        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                count++;
                break; // Break the loop if a factor is found
            }
        }

        if (count == 0 && i != 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

