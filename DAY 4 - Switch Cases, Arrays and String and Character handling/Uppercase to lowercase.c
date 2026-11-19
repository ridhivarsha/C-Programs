
#include<stdio.h>

int main()
{
    char arr[100];

    scanf("%[^\n]s",arr);

    int i;

    for(i=0; arr[i]!='\0'; i++)
    {
        char ch=arr[i];

        if(ch>='A' && ch<='Z')
            printf("%c",ch+32);

        else
            printf("%c",ch);
    }
}
