// 16.4 --> count the number of paths possible from start point to eend point in gameboard;


#include<bits/stdc++.h>
using namespace std;

int countPath(int startpos, int endpos)
{
    if(startpos==endpos)
    return 1;

    else if(startpos>endpos)
    return 0;

    int count=0;
    for (int i = 1; i <= 6; i++)
    {
        count += countPath(startpos+i,endpos);
    }
    
    return count;
}

int main()
{
    cout<<countPath(0,3);
}