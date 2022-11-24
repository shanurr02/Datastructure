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
    // Method 2 for accesing element of an array
    for(int x:a)
    {
        cout<<x<<" ";

    }
return 0;
}