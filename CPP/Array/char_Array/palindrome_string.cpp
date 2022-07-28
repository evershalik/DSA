// 10 -- palindrome string

#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    char a[n + 1];
    cout << "Enter your array : ";
    cin >> a;
    // int l=sizeof(a);
    // cout<<l;
    bool flag = true;
    for (int i = 0; i <= n; i++)
    {
        if (a[i] != a[n - 1 - i]){
            flag = false;
            cout<<"not s palindrome";
            return 0;
        }
        
    }
    if (flag)
    {
        cout << "yes it is a palindorme";
    }

    return 0;
    

    // Practice

   /*
   int n;
   cin>>n;
    char a[n+1];
    cin>>a;
    bool flag=1;
    for (int i = 0; i <= n; i++)
    {
        if(a[i] !=a[n-1-i]){
        flag=0;
            cout<<"no";
            return 0;
        }

    }
    if(flag)
    cout<<"yes";
    // else cout<<"no";
    */
    


}