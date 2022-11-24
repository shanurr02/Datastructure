#include<iostream>
using namespace std;

//function to add
int add(int a , int b) //prototype and declaration of a functin 
{  // a,b  are formal parameters 
    int c;   //local variable
    c =a+b; 
    return c;
    }


int main() 
 { 
    int x,y,z;  // actual parameters
    x =10;
    y =15;
    z =add(x,y); // function call
    cout<<"Sum is : "<<z<<endl;
return 0;
}