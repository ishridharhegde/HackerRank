#include "stdio.h"

int main()
{
    int n,max=0,count=0; //No of candles
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]); 
    }

    for(int i=0; i<n; i++)
    {
        if(max < arr[i])
        {
            max=arr[i];
            count=1;
        }
        else if (max == arr[i]) 
            count++;
    }

    printf("%d",count);

    return 0;
}
