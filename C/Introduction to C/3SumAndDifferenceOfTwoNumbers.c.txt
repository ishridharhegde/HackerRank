#include <stdio.h>

int main()
{
	//Declare two int and float variables
    int integer1,integer2;
    float float1,float2;

    scanf("%d %d %f %f",&integer1,&integer2,&float1,&float2);   //Input

    printf("%d %d\n%.1f %.1f",(integer1+integer2),(integer1-integer2),(float1+float2),(float1-float2));    //Output
    return 0;
}

