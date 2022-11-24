#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;


 public:
 rectangle(); // Default constructor
 rectangle( int a ,int b); // parameterized constructor
 int area();
 int peri();
 int getlength(){return length;}
 int setlength(int l){length=l;}
 ~rectangle(); //destructor
};

rectangle :: rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
int rectangle :: area()
{
    return length*breadth;

}
int rectangle ::peri()
{
    return 2*(length+breadth);
}
// Destructor
rectangle :: ~rectangle(){

}
int main() 
 {
  
    int l=0,b=0;
    cout<<"Enter Length and Breadth : ";
    cin>>l>>b;
    rectangle A(l,b);
    A.setlength(l);
    cout<<"Length :"<<A.getlength()<<endl;
    A.setlength(b);
    cout<<"Breadth: "<<A.getlength()<<endl;
    
    cout<<"Area: "<<A.area()<<endl;
    cout<<"Peri: "<<A.peri()<<endl;
    
return 0;
}