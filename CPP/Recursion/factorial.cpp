
// 16.1 -- factorial of n;


#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0)
    return 1;

    return(n * (fact(n-1)));
}

int main()
{
    int n;
    n=5;
    cout<<fact(n);
}