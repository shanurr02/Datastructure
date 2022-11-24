#include<iostream>
using namespace std;

//  Method 1
void printfun(int a[], int n)
{   cout<<"Output array :"<<endl;
    for(int i =0; i<n ; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
}

// Method 2
void inputfun(int *a,int n)
{
    cout<<"Input array"<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a[i];
    }
}

int main() 
 {  int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    inputfun(a , n);
    printfun(a,n);

return 0;
}