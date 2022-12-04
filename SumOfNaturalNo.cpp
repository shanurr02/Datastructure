#include<iostream>
using namespace std;
 
int sum(int n )
{
    if(n>0)
    {   
        return sum(n-1)+n;
    }
}

int main() 
 {
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"Sum of natural number upto "<<a<<endl;
    cout<<sum(a);

return 0;
}