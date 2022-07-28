// 16.2 -- print numbers till n in 
// i)Decreasing order
// 2)Decreasing order


#include <bits/stdc++.h>
using namespace std;

void decreasing(int n)
{
    if(n==1)
    {
        cout<< "1"<<endl;
        return ;
    }
    cout<<n<<endl;
    decreasing(n-1);
}



void increasing(int n)
{
    if(n==1)
    {
        cout<< "1"<<endl;
        return ;
    }
    increasing(n-1);
    cout<<n<<endl; 
}


int main()
{
    int n=4;
    decreasing( n);
    cout<<"-------------------------------------------\n";
    increasing(n);

    return 0;
}

