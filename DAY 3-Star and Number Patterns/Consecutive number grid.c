#include<stdio.h>
int main()
{
    int n,row,col,num=1;
    scanf("%d",&n);
    for(row=0;row<n;row++,printf("\n"))
    {
        for(col=0;col<n;col++)
        printf("%d ",num++);
    }
}

