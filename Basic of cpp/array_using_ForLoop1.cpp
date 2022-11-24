#include<iostream>
using namespace std;
int main() 
 { int n;
   cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    // user input array
    cout<<"Enter the value in array"<<endl;
    for(int i =0; i<n;i++)
    {
        cin>>a[i];
    }

      cout<<"My Array is : "<<endl;
    for(int i =0; i<n;i++)
    {
        cout<<a[i]<<" ";

    }


return 0;
}