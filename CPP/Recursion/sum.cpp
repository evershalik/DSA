// 16.1 -- sum of all numbers till n;


#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    while(n!=0)
    return(n+sum(n-1));
}

int main()
{
    int n;
    n=4;
    cout<<sum(n);
}