// 16.1 -- print the nth fibonacci number;
// fibonacci series : 1 1 2 3 5 8 13 - - - 

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==1 || n==0)
    return n;

    int fn =fib(n-1) + fib (n-2);
    return fn;
}

int main()
{
    int n;
    n=4;
    cout<<fib(n);
}