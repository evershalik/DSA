

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    // Function overloading
    void func()
    {
        cout << "I am Function with no argument.\n";
    }
    void func(int i)
    {
        cout << "I am function with int argument.\n";
    }
    void func(float i)
    {
        cout << "I am function with float argument.\n";
    }
    void func(double i)
    {
        cout << "I am function with double argument.\n";
    }
};

class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    void disp()
    {
        cout << this->real << " + " << this->img << "i" << endl;
    }
};

int main()
{
    // function overloading
    A f1;
    f1.func();
    f1.func(3);
    f1.func(4.5f);
    f1.func(5.5);

    // operator overloading
    Complex c1(2, 3), c2(4, 5);
    Complex c3;
    c3 = c1 + c2;
    // cout << c3.real << ","; // error due to private scope
    // cout << c3.img << ","; // error due ot private scope
    c3.disp();
}