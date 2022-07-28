#include <iostream>
using namespace std;
#include <string.h>

class binary
{
private:
    string s;

public:
    void read();
    void check();
    void display();
    void ones_comp();

} b;

void binary ::read()
{
    cout << "enter any binary number : " << endl;
    cin >> s;
}

void binary ::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Invalid binary number ! ";
            exit(0);
        }
    }
    cout << endl;
}

void binary ::display()
{
    cout<<"displaying your binary number:"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void binary ::ones_comp()
{
    cout<<"ones complement is :"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

int main()
{
    cout << "";
    b.read();
    b.check();
    b.display();
    b.ones_comp();
    b.display();

    return 0;
}
