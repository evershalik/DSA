#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    // Method 1
    string str; //declaration
    cin>>str;
    cout<<str<<endl;

    // Method 2
    string str1(5,'n');
    cout<<str1<<endl;

    // To input string with spaces
    string str2;
    cin.ignore();//don't forget to use this ar it is used to clear the buffer stored in cin;
    getline(cin,str2);
    cout<<str2<<endl;

    


    
   return 0;
}