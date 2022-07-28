#include <iostream>
using namespace std;

int main()
{
    cout << "";
    int i ,j ,n ;
    cout<<"enter no of rows : ";
    cin>>n;
    for(i=n;i>0;i--)
    {
        int k=0;
        for ( j = i; j>0; j--) 

        {
            k++;
            cout<<k<<' ';

        }
        cout<<endl;
        
    }

    return 0;
}