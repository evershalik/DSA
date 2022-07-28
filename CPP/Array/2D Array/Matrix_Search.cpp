// 9.2 -- Write an algorithm to find that given no. exist in the matrix or not.

#include<iostream>
using namespace std;



int main()
{
    int n,n1,n2;
    cout<<"Enter the no. you want to search : ";
    cin>> n;

    n1=n2=3;
    int a[n1][n2]={{1,2,3},
                {4,5,6},
                {7,8,9}};
    /*
    bool flag=false;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(a[i][j]==n)
            flag=true;
        }
        
    }
    if(flag)
    cout<<"element found.";

    else
    cout<<"Element not found.";
    */

   //to increase time complexity

   int r,c;
   r=0;
   c=n2-1;
   bool flag=false;
   while(r<n && c>=0)
   {
       if(n==a[r][c])
       flag=true;
       else if (a[r][c]>n)
       {
           c--;
       }
       else
       r++;

   }
   if(flag)
    cout<<"element found.";

    else
    cout<<"Element not found.";

}