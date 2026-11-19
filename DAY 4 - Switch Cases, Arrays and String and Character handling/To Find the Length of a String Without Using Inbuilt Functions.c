#include<stdio.h>

int main()
{
    char arr[100];

    scanf("%[^\n]", arr);

    int i, c = 0;

    for(i = 0; arr[i] != '\0'; i++)
    {
        c++;
    }

    printf("Length of the string %d", c);
}