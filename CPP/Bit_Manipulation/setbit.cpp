// 14.1 -- we have to insert/set a bit 1 to the position i of a given number.


#include <bits/stdc++.h>
using namespace std;

int setbit(int n,int pos)
{
    return(n | (1<<pos));
}

int main()

{

    cout<<setbit(5,1);

    
    
    
    
    return 0;
}