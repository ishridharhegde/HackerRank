#include <stdio.h>
#include <string.h>

int main() 
{

    int MAX_LENGTH = 256; //Maxium length of the string or character

    //Declare the needed variables
    char c;
    char str[MAX_LENGTH];
    char sen[MAX_LENGTH];

    //Take the input
    scanf("%c ", &c);
    scanf("%s ", str);
    fgets(sen, MAX_LENGTH, stdin);

    //Output
    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s\n", sen);

  return 0;
}

