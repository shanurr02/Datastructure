#include<iostream>
using namespace std;
int main() 
 {
    int *p;
    p =new int[5];
    p[0]=10;
    p[1]=15;
    p[2]=14;
    p[3]=16;
    p[4]=19;
    

    cout<<"Values in array using pointers: "<<endl;
    for(int i = 0 ;i<5 ; i++)
    {
        cout<<p[i]<<" ";
    }

    delete [ ] p;   /*Deleting dynamicaly allocated memory from heap*/
    return 0;
}