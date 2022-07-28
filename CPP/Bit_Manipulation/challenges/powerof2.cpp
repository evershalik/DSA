// 14.2 -- WAP to check if a no is power of 2


// NOTE : n & n-1  has same bits as n except the right most set(1) bit.
// a no. which is a power of 2 has a uniques property that the bitwise and of its n and and n-1 always give 0.


#include <bits/stdc++.h>
using namespace std;

void ispowof2(int n)
{
    if((n & n-1)==0)
    cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    //alternate method :

    // Note : before calling this func be aware of return type of func and make it int or bool.
    /*
    return !(n && (n & (n-1))); // here n && is used only for case of 0.
    */
}


int main()
{
    ispowof2(16);

    return 0;
}
