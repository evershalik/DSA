#include <iostream>
using namespace std;

int main()
{
    cout << "enter some number";
    int i,j,k=0,n;
    cin>>n;

    for(i=0;i<n;i++)
    {
        

        for ( j = 0; j <=i; j++)
        {
            k++;
            cout<<" "<<k ;
            
        }
        cout<<endl;
        
        
    }

    return 0;
}