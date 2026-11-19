#include<stdio.h>
int main()
{
    int n,i,sum=0,ct=0;
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]%2==0 && arr[i]%3==0)
        {
            sum=sum+arr[i];
            ct++;
        }
    }

    if(ct>0)
    {
        float avg=(float)sum/ct;
        printf("%f",avg);
    }
    else
    {
        printf("No numbers found");
    }

    return 0;
}