#include<iostream>
using namespace std;

int area(int l , int b)
{
    return l*b;
}

int peri(int l, int b)
 {
    return 2*(l+b);
 }

 
int main() 
 {
    int a=0, b=0;
    cout<<"Enter lenth and breadth"<<endl;
    cin>>a>>b;
    cout<<"Area : "<<area(a,b)<<endl;
    cout<<"Peri: "<<peri(a,b)<<endl;

return 0;
}