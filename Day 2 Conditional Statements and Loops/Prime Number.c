#include <stdio.h>

int main() {
    int n, i, count = 0;
    scanf("%d", &n);

    for (i = 2; i <= n; i++) 
        if (n % i == 0) 
            count++;

    if (count == 2) 
        printf("Prime\n");
        
        else if(count==0)
        printf("Neither prime nor composite\n");
        
        else
        printf("Not prime");
}
