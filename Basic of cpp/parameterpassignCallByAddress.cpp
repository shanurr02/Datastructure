#include<iostream>
using namespace std;

void swap(int *b , int *c)
{
    int temp;
    temp = *b;
    *b =*c;
    *c = temp;
}
int main() 
 {
   int x,y;
   cout<<"Enter two number: "<<endl;
   cin>>x>>y;
   swap(&x,&y);
   cout<<x<<" "<<y<<endl;

return 0;
}