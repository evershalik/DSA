#include<iostream>
using namespace std;

int binarytodecimal(int x)
{
    int rem,ans=0,z=1;
    while(x>0)
    {
        rem=x%10;
        ans += rem*z;
        z *=2;
        x /=10;

        
    }
    return ans;
}

int octaltodecimal(int x)
{
    int rem,ans=0,z=1;
    while(x>0)
    {
        rem=x%10;
        ans += rem*z;
        z *=8;
        x /=10;

        
    }
    return ans;
}

int decimaltobinary(int x)
{
    int rem,ans=0,z=1;
    while(x>0)
    {
        rem=x%10;
        ans = (rem*10) + rem;
        // z *=2;
        x /=10;

        
    }
    return ans;
}



int main()
{
    cout<<"hello"<<endl;
    int x;
    cin>>x;
     
    // cout<<binarytodecimal(x);
    // cout<<octaltodecimal(x);
    cout<<decimaltobinary(x);


    return 0;

}