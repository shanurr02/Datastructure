#include<iostream>
using namespace std;

int main() 
 { int l=0 ,b=0;
  cout<<"Enter length and breadth "<<endl;
  cin>>l>>b;
   
  int area = l*b;
  int peri = 2*(l+b);
  cout<<"Area : "<<area<<" Peri : "<<peri<<endl;


return 0;
}