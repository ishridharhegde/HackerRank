#include <stdio.h>

void calculate_the_maximum(int n, int k) 
{
    int bitwiseAND=0,bitwiseOR=0,bitwiseXOR=0;
    int i,j;

    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(bitwiseAND <(i&j) && (i&j) < k)
                bitwiseAND = i & j;
            if(bitwiseOR < (i|j) && (i|j) < k)
                bitwiseOR = i | j;
            if(bitwiseXOR < (i^j) && (i^j) < k)
            bitwiseXOR = i ^ j;
        }
    }
    printf("%d\n%d\n%d\n",bitwiseAND,bitwiseOR,bitwiseXOR);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
