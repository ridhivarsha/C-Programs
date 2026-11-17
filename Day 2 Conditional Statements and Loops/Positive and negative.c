#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num > 0) {
        printf("Number is %d:positive\n", num);
    } else if (num < 0) {
        printf("Number is %d:negative\n", num);
    } else {
        printf("Number is %d:zero\n", num);
    }

    return 0;
}

        