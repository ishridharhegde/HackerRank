#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);     //Get the array size

    int array[n],dummy[n],i;
    for (i = 0; i < n; i++) // Get the array input
    {
      scanf("%d", &array[i]);
      dummy[n-i-1]=array[i];
    }         
        
    
    //Reverse the array
    for(i=0; i<n; i++)
        array[i] = dummy[i];
   
        

    //Print the reversed array
    for(i=0; i<n; i++)
        printf("%d ",array[i]);

    return 0;
}

