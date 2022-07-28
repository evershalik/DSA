// 16.4 --> No of ways to insert a given tile 2 x 1 in a board of 2 x n.

#include<bits/stdc++.h>
using namespace std;

int tilingCount (int n)
{
    if(n==0)
    return 0;

    else if(n==1)
    return 1;

    return tilingCount(n-1)+ tilingCount(n-2);
}


int main()
{
    cout<<tilingCount(4);
}
