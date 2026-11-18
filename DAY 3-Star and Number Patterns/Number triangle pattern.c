#include <stdio.h>
int main()
{
    int n, row, col, num;
    scanf("%d", &n);

    for(row = 0; row < n; row++, printf("\n"))
    {
        num = 1;
        for(col = 0; col <= row; col++) 
        {
            printf("%d ", num);
            num++;
        }
    }
}
