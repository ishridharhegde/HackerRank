#include<stdio.h>

int main()
{
    unsigned long long int arr[5], min, max, sum = 0;

    //Take the array as input
    for(int i=0; i<5; i++)
        scanf("%lld",&arr[i]);

    //Find the sum, min and max
    min = max = arr[0];
    sum += arr[0];

    for(int i=1; i<5; i++)
    {
        if(min > arr[i])
            min = arr[i];
        
        if(max < arr[i])
            max = arr[i];

        sum = sum + arr[i];
    }

    //Print min sum and max sum
    printf("%lld %lld",(sum-max), (sum-min));


    return 0;
}
