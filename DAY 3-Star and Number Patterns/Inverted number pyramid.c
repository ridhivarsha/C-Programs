#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=0;row<n;row++,printf("\n"))
    {
        for(col=1;col<n-row;col++)
        printf("%d",col);
    }
}

