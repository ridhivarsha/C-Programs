#include <stdio.h>

int main() {
    int start, end, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        sum = sum + i;
    }

    printf("The sum of numbers from %d to %d is: %d\n", start, end, sum);

    return 0;
}
