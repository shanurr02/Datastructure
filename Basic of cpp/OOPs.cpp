#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;


 public:
void initialize( int a ,int b)
{
    length=a;
    breadth=b;
}


int area()
{
    return length*breadth;
}

int peri()
{
    return 2*(length+breadth);
}
};

int main() 
 {
   rectangle A;
    int l=0,b=0;
    cout<<"Enter Length and Breadth : ";
    cin>>l>>b;
    A.initialize(l,b);
    cout<<"Area: "<<A.area()<<endl;
    cout<<"Peri: "<<A.peri()<<endl;
    
return 0;
}