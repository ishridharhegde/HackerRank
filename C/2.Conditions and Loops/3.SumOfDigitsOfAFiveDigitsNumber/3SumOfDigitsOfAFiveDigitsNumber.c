#include <stdio.h>

int main()
{
	
    int n,sum,i,temp;
    scanf("%d", &n);

    //Find the sum
    for(i=0,temp=n,sum=0; i<5; i++)
    {
        sum +=temp%10;
        temp/=10;
    }

    printf("%d",sum);

    return 0;
}

