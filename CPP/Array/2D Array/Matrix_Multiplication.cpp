// 9.2 -- Matrix multiplication :
/* given two 2-D arrays of sizes n1*n2 and n2*n3. Your task is to multiply these matrices and output the muoltiplied matrix.
*/
#include<iostream>
using namespace std;


int main()
{
    cout<<"Let's Start : \n";
    cout<<"Enter order of matrix m1 and m2 as n1 n2 n3 \n";
    int n1=2,n2=3,n3=2;
    cin>>n1 >>n2 >>n3;

    int m1[n1][n2]; /*={{1,2,3},
                    {4,5,6}}; */
    int m2[n2][n3]; /*={{1,2},
                    {3,4},
                    {5,6}}; */

    //inputing m1
    cout<<"Enter m1 of order "<<n1<<" * "<<n2<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>m1[i][j];
        }
        
    }

    //inputing m2
    cout<<"Enter m2 of order "<<n2<<" * "<<n3<<endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>m2[i][j];
        }
        
    }
    
    
    //printing m1
    cout<<"Matrix M1 is : \n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout<<m1[i][j]<<" ";

        }
        cout<<endl;
    }
    
    //printing m2
    cout<<"Matrix M2 is : \n";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<m2[i][j]<<" ";

        }
        cout<<endl;
    }

    //sum
    cout<<"Matrix multiplication is : \n";
    int sum[n1][n3]={0};

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                sum[i][j] += (m1[i][k]*m2[k][j]);
            }
            
        }
        
    }

    //printing matrix multiplication

    for (int i = 0; i < n1; i++)
    {
        for (int  j = 0; j < n3; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;

}