#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};


int main() 
 {
    struct rectangle r = {5, 6};
    cout<<"Length of rectangle"<<endl;
    cout<<r.length<<endl;
    cout<<"Breadth of rectangle"<<endl;
    cout<<r.breadth<<endl;
    cout<<"********"<<endl;

    struct rectangle *p = &r;
    cout<<"Length of rectangle"<<endl;
    cout<<p->length<<endl;
    cout<<"Breadth of rectangle"<<endl;
    cout<<p->breadth<<endl;
    cout<<"********"<<endl;
    p->length=16;
    p->breadth=10;
    cout<<"Length of rectangle"<<endl;
    cout<<r.length<<endl;
    cout<<"Breadth of rectangle"<<endl;
    cout<<r.breadth<<endl;

    
return 0;
}