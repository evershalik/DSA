#include<iostream>
using namespace std;

void fibenacci(int n)
{
    int t1=0,t2=1;
    int nt;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        nt=t1+t2;
        t1=t2;
        t2=nt;

    }
}

int main()
{
    int n;
    cout<<"enter any number :";
    cin>>n;
    fibenacci(n);


    return 0;
}