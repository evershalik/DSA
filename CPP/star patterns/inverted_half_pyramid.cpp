#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter your number :";
    cin>>n;
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}