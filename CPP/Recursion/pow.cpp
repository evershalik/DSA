// 16.1 -- power of n raise to power m;


#include <bits/stdc++.h>
using namespace std;

int power(int n,int m)
{
    if(m==0)
    return 1;

    return (n * power(n,m-1));
}

int main()
{
    int n,m;
    n=4,m=4;
    cout<<power(n,m);
}