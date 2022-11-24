#include<iostream>
using namespace std;

int add(int a , int b)
{
    int c =a+b;
      
    return c;

}
int main() 
 { 
    int x,y;
    cout<<"Enter the number: "<<endl;
    cin>>x>>y;
    cout<<"Addition of two numbers: "<<endl;
    cout<<add(x,y);
return 0;
}