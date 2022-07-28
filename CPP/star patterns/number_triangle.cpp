#include <iostream>
using namespace std;

int main()
{
    cout << "Enter any number :";
    int i,j,k,n;
    cin>>n;
    int m=n;
    int z;

    for(i=1;i<=n;i++)
    {
        for(z=1;z<m;z++)
        {
            cout<<' ';

        }
        m--;
        
        k=0;
        for(j=1;j<=i;j++)
        {
            k++;
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}