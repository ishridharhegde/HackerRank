#include <stdio.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s); //Take the input from stdin
  	
    printf("Hello, World!\n%s",s);  //Print the hello world message & then the given string in the next line
    return 0;
}

