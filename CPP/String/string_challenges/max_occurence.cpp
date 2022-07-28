// 13.2 -- output the occurence of character which is occuring the max times in the string.

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    string s="abcacbade";
    int freq[26]={0};//because we have 26 alphabets.

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;//important line
    }

    char ans='a';
    int maxF=0;  

    for (int i = 0; i < 26; i++)
    {
        if(freq[i]>maxF)
        {
            maxF=freq[i];
            ans=i+'a';
        }
    }

    cout<<maxF<<" "<<ans<<endl;
    
    

    


    return 0;
}