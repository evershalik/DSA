// 15.2 -- Find HCF of two given no n1,n2.

// NOTE : n1-n2=n3 and n3 and n2 will have the same hcf as of n1 and n2 i.e. subtraction doesn't effect hcf.


#include <bits/stdc++.h>
using namespace std;

int hcf(int n1,int n2)
{
    int temp=0;
    while(n2 !=0)
    {
        temp = n1%n2;
        n1=n2;
        n2=temp;
    }
    return n1;
}

int main()
{
    int n,m;
    n=42,m=24;
    cout<< hcf(n,m);
    return 0;
}