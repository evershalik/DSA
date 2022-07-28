// 16.3 --> remove all duplicates from a given string;


#include<bits/stdc++.h>
using namespace std;

string remove_duplicate(string s)
{
    if(s.length()==0)
    return "";

    char ch = s[0];
    string ans= remove_duplicate(s.substr(1));

    if(ch==ans[0])
    return ans;
    else
    return ch+ans;


}

int main()
{
    string s="aabcc";
    cout<<remove_duplicate(s);
    return 0;
}