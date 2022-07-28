#include <iostream>
using namespace std;

int main()
{
    cout << "Enter no of rows :";
    int i,j,k,n;
    cin>>n;
    int m=n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<m;k++)
        {
            cout<<" ";
        }
        m--;
        for(j=1;j<=n;j++)
        {
            cout<<"*"<<' ';

        }
        cout<<endl;
    }

    return 0;
}