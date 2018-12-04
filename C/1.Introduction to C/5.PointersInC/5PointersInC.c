#include <stdio.h>
#include <math.h>

void update(int *a,int *b) 
{
  // Keep a temp variable to store value of a as it will change after modification
  int temp = (*a);
  (*a) += (*b);
  (*b) = abs(temp - (*b));
}

int main()
 {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

