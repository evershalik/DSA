// 16.3 --> replace pi with 3.14 in given string.
// Ex --> pippxxppiixipi to (3.14ppxxp3.14ixi3.14).

#include<bits/stdc++.h>
using namespace std;

void replacePi(string s)
{
    if(s.size()==0)
    return ;

    if(s[0]=='p' and s[1]=='i')
    {
        cout<<3.14;
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));

    }
}

int main()
{
    string s="pippxxppiixipi";
    replacePi(s);

    
}