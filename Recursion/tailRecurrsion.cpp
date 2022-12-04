#include<iostream>
using namespace std;


void fun2(int n)
{   if(n>0)
{
    cout<<n<<" ";
    fun2(n-1);
}
}
int main() 
 {

    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    fun2(a);
return 0;
}