#include <iostream>
using namespace std;


struct emp
    {
        int empid;
        char empchar;
        float sal;
        char gender ;

    } shankar,harry,shubham,jatin ; //these are the names of employees 


int main()
{
    cout << "Creating a structure "<<endl;
    // struct emp shankar; // we can also define employee names here 
    shankar.empid=1;
    shankar.empchar='s';
    shankar.sal=5000;
    shankar.gender='M';
    cout<<shankar.empid<<endl;
    cout<<shankar.empchar<<endl;
    cout<<shankar.sal<<endl;
    cout<<shankar.gender<<endl;




    


    return 0;
}