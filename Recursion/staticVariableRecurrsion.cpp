#include<iostream>
using namespace std;

int fun(int n )
{
     static int x = 0;
     if(n>0)
     {
        x++;
        return fun(n-1)+x;
     }
     return 0;
}
int main() 
 {  
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"Using method 1"<<endl;
    int r =fun(a);
    cout<<r<<endl;

    cout<<"Function after calling itseelf once :"<<endl;
     r =fun(a);
    cout<<r<<endl;
return 0;
}