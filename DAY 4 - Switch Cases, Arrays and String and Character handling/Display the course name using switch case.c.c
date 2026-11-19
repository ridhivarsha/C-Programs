#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);

    switch(n)
    {
        case 'A':
            printf("AIDS");
            break;

        case 'B':
            printf("BUSINESS MANAGEMENT");
            break;

        case 'C':
            printf("CYBERSECURITY");
            break;

        default:
            printf("Invalid Input");
    }
}