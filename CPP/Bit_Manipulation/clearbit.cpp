// 14.1 -- we have to clear/set a bit 0 to the position i of a given number.


#include <bits/stdc++.h>
using namespace std;

int clearbit(int n,int pos)
{
    return(n & (~(1<<pos)));
}

int main()

{

    cout<<clearbit(5,0);

    
    
    
    
    return 0;
}