// 21.4--> Polymorphism:-->  Poly = many and Morphism = Forms;

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void print() // if we don't use virtual then in line 31, ptr->print() will call the base class func rather than derived class.
    {
        cout << "This is base class print() function.\n";
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "This is base derived print() function.\n";
    }
};

int main()

{
    base b1, *ptr;
    derived d1;
    b1.print();
    ptr = &d1;
    ptr->print(); // in pointer object we use -> not rather than dot(.).

    return 0;
}