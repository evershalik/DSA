// 21.1 --> OOPs

#include <bits/stdc++.h>
using namespace std;

typedef class student
{
public:
    string name;
    int rollno;
    char gender;

    student() { cout << "Default Constructor.\n"; } // default condtructor

    student(string str, int rno, char gen)
    {

        cout << "Parameterised Constructor.\n";
        name = str;
        rollno = rno;
        gender = gen;
    } // parameterised condtructor

    student(student &obj)
    {

        cout << "Copy constructor.\n";
        name = obj.name;
        rollno = obj.rollno;
        gender = obj.gender;
    } // default copy constructor( shallow copy --> only copy values not the address)

    // user defined copy constructor( deep copy --> copy values along with the address)

    ~student()
    {
        cout << "Default Destructor.\n";
    } // destructor --> will be called by default after exiting from main function.It will be called as mnny times as the objects are created;

    void getinfo()
    {
        cout << "Calling getinfo() func " << endl;
        cout << name << endl;
        cout << rollno << endl;
        cout << gender << endl;
    }

    void putinfo()
    {
        cout << "Calling putinfo() func " << endl;
        cin >> name;
        cin >> rollno;
        cin >> gender;
    }

    bool operator==(student &a)
    {
        if (name == a.name and rollno == a.rollno and gender == a.gender)
            return true;
        else
            return false;
    }

} stu;

int main()

{
    stu s1; // default constructor

    // s1.putinfo();
    // s1.getinfo();

    stu s2("name", 12, 'M'); // parameterised constructor
    // s2.getinfo();

    stu s3 = s2; // copy constructor
    s3.getinfo();

    if (s2 == s3)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}