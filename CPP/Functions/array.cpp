#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int n;
    cout<<"enter values of array :";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];

    }

    cout<<"enter any number you want to search :";
    cin>>n;

    int z;

    for(int i=0;i<5;i++)
    {
        if(a[i]==n)
        {
           z=1;
           break; 
        }
        else
        continue;
         
    
    }
    if(z==1)
    cout<<"yes";
    else 
    cout<<"no";

    return 0;
}