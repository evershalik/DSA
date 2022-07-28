// 16.4 --> Friends pairing problem
// Find the no. of ways in which n friends can remain single or can be paired.



#include<bits/stdc++.h>
using namespace std;

int friendCount(int n)
{
    if(n==0 || n==1 || n==2)
    return n;

    return friendCount(n-1) + friendCount(n-2)*(n-1);
}
int main()
{
    cout<<friendCount(4);
}