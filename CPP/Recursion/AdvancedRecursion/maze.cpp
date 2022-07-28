// 16.4 --> count the number of paths possible in a maze.

#include<bits/stdc++.h>
using namespace std;

int countPath(int size, int i, int j)
{
    if(i==size-1 and j==size-1)
    return 1;

    if(i>=size or j>= size)
    return 0;

    return countPath(size,i+1,j) + countPath(size,i,j+1);

}

int main()
{
    cout<<countPath(3,0,0);
}