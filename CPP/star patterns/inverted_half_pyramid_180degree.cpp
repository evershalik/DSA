#include <iostream>
using namespace std;
int main()
{
    cout << "enter your number";
    int i,j,k,m,n;
    cin>>n;
    m=n;

    for ( i = 0; i < n; i++)    
    {
        for(k=m;k>0;k--)
        {
            cout<<" "; 
        }
        m--;
          
        
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}