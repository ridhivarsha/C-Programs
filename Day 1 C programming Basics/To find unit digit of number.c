#include <stdio.h>

int main() {
    
    int number = 4827; 
    int unitDigit;

    unitDigit = number % 10;

    printf("The given number is: %d\n", number);
    printf("The unit digit is: %d\n", unitDigit);

    return 0;
}


