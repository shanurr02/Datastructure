#include<iostream>

using namespace std;
int main() 
 {
    int a = 10;
    int *p; /*Declaration of pointer*/
    p =&a;  
    cout<<"Value of a : ";
    cout<<a<<endl;
    cout<<"Address of a : ";
    cout<<p<<endl;
    cout<<"Value of a : ";
    cout<<*p<<endl;
    cout<<"Address of a : ";
    cout<<&a<<endl;
return 0;
}