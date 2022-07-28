#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    string str1="fam";
    string str2="ily";

    str1.append(str2);// it actually modify str1;
    cout<<str1<<endl;

    //concating without actual modification
    cout<<str1+str2<<endl;

    //accessing particular values/characters from strings
    cout<<str1[1]<<endl;

    //clearing a string
    string s1="xbcjsbcsbckjcj sdjkbcs bks";
    s1.clear();
    cout<<s1<<endl;

    //comparing two strings
    string a1="abc";
    string a2="xyz";
    string a3="xyz";

    /*
    NOTE : 
    i) if two string are equal --> 0 
    ii) if 1st string is greater than 2nd string --> positive value 
    iii) if 1st string is smaller than 2nd string --> negative value 
    */
    cout<<a1.compare(a2)<<endl;
    cout<<a2.compare(a1)<<endl;
    cout<<a2.compare(a3)<<endl;
    //proper way to compare
    if(a2.compare(a3)==0)
    // if(!a2.compare(a3)) // it can also be used.
    cout<<"string are equal."<<endl;


    //checking if string is empty or not
    string e1;
    if(e1.empty())
    cout<<"yes string is empty."<<endl;


    //erasing character from string
    string err1="nincompoop";
    err1.erase(3,3);
    cout<<err1<<endl;


    // to find substring in a string?
    string b1="iamninja";
    cout<<b1.find("am")<<endl;//it return the index.


    //inserting a string into some other string
    string c1="Hello";
    c1.insert(1,"ey");
    cout<<c1<<endl;


    //length of string
    string d1="findmylenght";
    // cout<<d1.size()<<endl;
    cout<<d1.length()<<endl;//give size excluding null character '\0'
    

    // to extract a substring from a string
    string f1="extractmehere";
    cout<<f1.substr(2,6)<<endl;
    //we can also store this in some other string
    string f2=f1.substr(2,6);
    cout<<f2<<endl;


    // converting string into integer
    string g1="123";
    int x1= stoi(g1);
    cout<<x1+2<<endl;


    //converting integer into string
    int x2=123;
    string g2=to_string(x2);
    cout<<g2+ "21" <<endl;


    //sorting a string
    string h1="zxcvbnmasdfghjklqwertyuiop";
    //ascending order
    sort(h1.begin(),h1.end());
    cout<<h1<<endl;
    //descending order
    sort(h1.begin(),h1.end(),greater<int>());
    cout<<h1<<endl;

    

    //lower to upper
    string k1="iamlower";
    transform(k1.begin(),k1.end(),k1.begin(), ::toupper);
    cout<<k1<<endl;


    //upper to lower
    string k2="IAMUPPER";
    transform(k2.begin(),k2.end(),k2.begin(), ::tolower);
    cout<<k2<<endl;




 



    return 0;
}