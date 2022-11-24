#include<iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char x;
};

int main() 
{ struct rectangle  r1= {10,5}; /*Declaring*/

//   Assigning the value to variable of struture vy usinjg  dot operator
 r1.length = 15;  /*Initializing*/
 r1.breadth = 7;  /*Initializing*/
 
 
//  Memory size of structure
  cout<<sizeof(r1)<<endl;

  cout<<r1.length<<endl;
  cout<<r1.breadth<<endl;
  cout<<"Area of recatngle: "<<r1.length * r1.breadth<<endl;
  
  return 0;
}