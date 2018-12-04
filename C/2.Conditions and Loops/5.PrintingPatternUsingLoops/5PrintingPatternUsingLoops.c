#include <stdio.h>

//Returns the maximum number among the given two
int MAX(int m, int n)   
{
    if(m>n)
        return m;
    else
        return n;
}

int main() 
{
    int n,i,j;
    scanf("%d", &n);

    for (i = -n + 1; i < n; i++) 
    {
      for (j = -n + 1; j < n; j++) 
      {
        printf("%d ", MAX(abs(i), abs(j)) + 1);
      }
      printf("\n");
    }

    return 0;
}

