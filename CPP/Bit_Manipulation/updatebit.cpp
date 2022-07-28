// 14.1 -- we have to update/set a bit 1 or 0 to the position i of a given number.


#include <bits/stdc++.h>
using namespace std;

int updatebit(int n,int pos, int i)
{
    if(i==1)
    return(n | (1<<pos));
    else
    return(n & (~(1<<pos)) );

    //alternatemethod;
    /*
    int comp=~(1<<pos);
    n= n & comp;
    return( n | (value<<pos));
    */
}

int main()

{

    cout<<updatebit(5,1,0);

    
    
    
    
    return 0;
}