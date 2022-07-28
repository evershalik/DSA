// 21.2 --> encapsulation-->to hode something from a particular class

#include <bits/stdc++.h>
using namespace std;

typedef class Encapsulation
{
public:
    int a;
    void funcA() { cout << "Public.\n"; }

private:
    int b;
    void funcB() { cout << "Private.\n"; }

protected:
    int c;
    void funcC()
    {

        cout << "Protected.\n";
    }

} Ecp;

int main()

{
    Ecp e1;

    e1.funcA();
    // e1.funcB(); // error as class is private
    // e1.funcC(); // error as class is protected

    return 0;
}
