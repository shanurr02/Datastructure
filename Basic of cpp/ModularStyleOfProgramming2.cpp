#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;

};
void initialize(struct rectangle *r , int a ,int b)
{
    r->length=a;
    r->breadth=b;
}


int area(struct rectangle *r )
{
    return r->length*r->breadth;
}

int peri(struct rectangle *r)
{
    return 2*(r->length+r->breadth);
}


int main() 
 {
    struct rectangle A;
    int l=0,b=0;
    cout<<"Enter Length and Breadth : ";
    cin>>l>>b;
    initialize(&A , l,b);
    cout<<"Area: "<<area(&A)<<endl;
    cout<<"Peri: "<<peri(&A)<<endl;
    
return 0;
}