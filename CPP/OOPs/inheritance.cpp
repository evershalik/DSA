// 21.3 --> Inheritance : Accessing data of other class
// NOTE : only pubilc and protected members can be inherited. Public members can't be inherited.
/*
Derived class : child class(data interited from other classs in this)
Base Class : Parent class(from which data is being inherited)

Type of inheritance:
1) Single inheritance
2) Multiple inheritance
3) Multiline inheritance
4) Hybrid inheritance
5) Hierarchical inheritance

*/

#include <bits/stdc++.h>
using namespace std;

class X
{
    int x;
};

class A
{
public:
    int a;
};

// Single Inheritance
class B : public A
{
};

// Multiple Inheritance
class C : public A, public B
{
public:
};

// Multilevel Inheritance
class D : public B
{
public:
};

// Hybrid Inheritance
class E : public B, public X
{
public:
};

// Hierarchical Inheritance;
//  class D -> class B-> class A ;
//  class E -> class B-> class A ;
//  class F -> class c-> class A ;
//  class G -> class c-> class A ;

int main()

{

    return 0;
}