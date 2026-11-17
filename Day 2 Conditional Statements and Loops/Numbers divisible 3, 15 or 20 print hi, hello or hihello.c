#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 15 == 0) 
        printf("HiHello\n");
    
    else if (num % 3 == 0 || num % 20 == 0) 
        printf("hello\n");
    
    else 
        printf("Not divisible by 3, 15, or 20.\n");

    return 0;
}

