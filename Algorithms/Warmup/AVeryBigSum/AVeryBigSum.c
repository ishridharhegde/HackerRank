#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    //Declare the array and sum variable
    unsigned long long int ar[n], sum=0;

    //Input the array
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&ar[i]);
        sum += ar[i];
    }   

    printf("%lld",sum);

    return 0;
}
