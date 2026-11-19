
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 0 ... 34:
            printf("Fail");
            break;
        case 35 ... 60:
            printf("Average");
            break;
        case 61 ... 100:
            printf("Good");
            break;
        default:
            printf("Invalid input");
    }
}
