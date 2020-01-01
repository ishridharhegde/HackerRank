#include <iostream>
using namespace std;

//Function to calculate the sum of two integers
int solveMeFirst(int a, int b)
{
  return(a+b); 
}
int main() 
{
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);	//Call the funuction
  cout<<sum;
  return 0;
}