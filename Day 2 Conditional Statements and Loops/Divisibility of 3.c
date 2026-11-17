#include <stdio.h>

int main() {
    int num, a;
    scanf("%d", &num);
    a = num % 3;
    
    if (a == 0) {
        printf("divisible by 3\n");
    } else {
        printf("Not Divisible by 3 and Remainder is %d\n", a);
    }
    return 0;
}

