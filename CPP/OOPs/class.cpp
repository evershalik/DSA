#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;

    void put(int a1, int b1, int c1);
    void get()
    {
        cout << "Value of a is : " << a << endl;
        cout << "Value of b is : " << b << endl;
        cout << "Value of c is : " << c << endl;
        cout << "Value of d is : " << d << endl;
        cout << "Value of e is : " << e << endl;
    }

} shankar;  

void employee ::put(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    // employee shankar; //we can also define a employee name here or also can define at the end of class i.e after } employee name ;
    cout << "";
    shankar.d = 4;
    shankar.e = 5;
    // shankar.a=12; it will throw error as a is declared as private variable
    shankar.put(1, 2, 3);
    shankar.get();

    return 0;
}