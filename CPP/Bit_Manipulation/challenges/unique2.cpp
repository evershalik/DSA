// 14.3 -- find two uniques numbers from a given array.

// NOTE : XOR is a no with itself always give 0;

#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1<<pos)) !=0) ;
}

void unique(int arr[],int  n)
{
    int xorsum = 0;
    for (int  i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    int tempxor=xorsum;
    int lastbit=0;
    int pos =0;
    while(lastbit!=1)
    {
        lastbit = xorsum & 1;
        pos++;
        xorsum = xorsum >>1;
    }
    int newxor=0;
    for (int  i = 0; i < n; i++)
    {
        if(setBit(arr[i],pos-1))
        newxor = newxor ^ arr[i];

    }
    
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}

int main()
{
    int arr[]={2,4,6,7,4,5,6,2};
    cout << unique(arr,8);
    return 0;
}
