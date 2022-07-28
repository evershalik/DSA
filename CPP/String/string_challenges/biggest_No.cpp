// 13.2 -- we have to convert a given string No. into biggest string.

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int  main()
{

    string s="52134";
    // sort(s.begin(),s.end()); //ascending order
    sort(s.begin(),s.end(),greater<int>()); //descending order
    cout<<"The greatest No. from the string is : ";
    cout<<s<<endl;
/*
    for (int i = s.length(); i >=0 ; i--)
    {
        cout<<s[i];
    }
*/
    

    return 0;

}