#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int changelength(struct rectangle *p ,int l) 
{
     p->length = l;
     return p->length;
}
int main() 
 {
    struct rectangle r ={ 5,6};
    cout<<changelength(&r ,20);
return 0;
}