#include <stdio.h>

int main()
 {
     int n,sum=0,i;

     scanf("%d",&n);    //Take the size of the array

    int array[n];       //Declare the array
    for(i=0; i<n; i++)
    {
      scanf("%d", &array[i]);   //Take the array elements as inputs
      sum+=array[i];            //Find their sum 
    }

    printf("%d",sum);       //Print the sum

    return 0;
}

