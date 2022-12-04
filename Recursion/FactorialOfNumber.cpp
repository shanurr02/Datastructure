#include<iostream>
using namespace std;

 double factorial(  double n)
{
    if(n==1 || n==0)
    {
        return 1;

    }
    else 
    {
        return factorial(n-1)*n;
    }
}
int main() 
 {
  double a;
    cout<<"Enter the number :";
    cin>>a;
    cout<<"Factorial of "<<a<<" is "<<factorial(a);
return 0;
}