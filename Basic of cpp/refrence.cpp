#include<iostream>
using namespace std;
int main() 
 {

    // Refrence is the other name of variable.
    int a = 10;
    int &r = a;  // intialization of refrence
    cout<<"Printing the value of variable and refrence"<<endl;
    cout<<a<<" "<<r<<endl;


return 0;
}