// 13.2 -- Converting a string form lower to upper and vice versa.


#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    //DIFFERENCE BETWWEEN UPPER AND LOWER CASE CHARACTERS IS 32.

    //Upper to Lower [A=65 and Z=90]
    string s1 = "HELLOHI";
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] += 32;
        }
    }
    cout << s1 << endl;



    //Lower to upper [a=97 and z=122]
    string s2 = "hellohi";
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] >= 'a' && s2[i] <= 'z')
        {
            s2[i] -= 32;
        }
    }
    cout << s2 << endl;



}