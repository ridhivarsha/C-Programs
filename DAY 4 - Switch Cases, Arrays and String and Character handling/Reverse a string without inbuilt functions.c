#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    int i,len=0;
    for(i=0;ch[i]!='\0';i++)
        len++;
    for(i=len-1;i>=0;i--)
        printf("%c",ch[i]);
}