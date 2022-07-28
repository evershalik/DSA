// 14.1 -- we have to get a bit from position i from a given no;


#include <bits/stdc++.h>
using namespace std;

bool getBit(int n,int pos)
{
    return( (n & (1<<pos)) != 0);
}


int main()


{

    cout<<getBit(5,2); // 5 in binary is 0 1 0 1 having index as 3 2 1 0 , so we need to find the bit at 2nd postition i.e. 1;
    
    
    
    
    return 0;
}