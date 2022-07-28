// 14.2 -- count the no of ones in binary representation of a no..


#include <bits/stdc++.h>
using namespace std;

int countones(int n)
{
    int count=0;
    while(n !=0){
    n=(n & (n-1));
    count++;
    }

    return count;

}

int main()
{
    cout<<countones(5);
} 