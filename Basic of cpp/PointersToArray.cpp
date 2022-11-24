#include<iostream>

using namespace std;
int main() 
 {
    int a[5]={2,4,6,8,10};
    int *p; /*declation*/
    p=a;
    cout<<"Method 1 : Direct accessing"<<endl;
    for(int i=0;i<5 ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Method 2 : Indirect accessing (by pointers): "<<endl;
    for(int i=0;i<5 ; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    cout<<"Pointers in an array, pointers act as name of an array"<<endl;
return 0;
}