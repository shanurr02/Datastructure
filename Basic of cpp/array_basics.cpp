#include<iostream>

using namespace std;
int main() 
 {
    int a[5];
    a[0]=12;
    a[1]=15;
    a[2]=25;

    //to print adress size of an array
    cout<<sizeof(a)<<endl;

    // to access the element of array by index
    cout<<a[1]<<endl;

    // To intiallize all the element by zero 
    int b[10] = {0};
    cout<<b[0]<<" "<<b[8]<<endl;
    
return 0;
}