#include<iostream>
using namespace std;
 

struct rectangle{
    int length;
    int breadth;
};

int main() 
 {
    cout<<"Dynamic allocation of heap using pointer"<<endl;
    struct rectangle *p;
    p= new rectangle;
    p->length =15;
    p->breadth =17;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
      

return 0;
}