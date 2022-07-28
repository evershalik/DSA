#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int* p= new int (); // a random memory will be allocated to p in heap area;

    // cout<<p<<endl;
    // cout<<&a<<endl;
    // cout<<*p<<endl;
    
    *p=10; //it will be stored in heap and act as a global variable;

    delete(p); //deallocate memory fro heap i.e. p will remain in stack ut the value ehich p was storing previously i.e 10 is now deleted from heap and now this pointer si working as a dangling pointer i.e it is refereing to some invalid location so it can be harmful so we have to provide him another reference in heap;

    p=new int[4];  //allocated a memory to store an array.

    delete[] p;  // to deallocate memory as p is now storing memory of a array an d now silimalry as about it will act as dangling pointer so we have to kill it from stack.

    p=NULL; //now p is not a dangling pointer.

    return 0;
}