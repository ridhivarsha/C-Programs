#include <stdio.h>

int main()
{
    char arr[100];
    scanf("%s", arr);  // apple

    char ch;  // p
    int ct = 0, i;

    scanf(" %c", &ch);

    for(i = 0; arr[i] != '\0'; i++)
    {
        char c = arr[i];  // a

        if(ch == c)
            ct++;
    }

    printf("%d", ct);

    return 0;
}
