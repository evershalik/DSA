// 9.2 -- Transposing a matrix of order N where 1<=N<=1000.

#include<iostream>
using namespace std;



int main()
{
    int N=3;
    cout<<"Let's Start : \n";
    // cin>>N;
    int a[N][N]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};

    for(int i=0;i<N;i++)
    {
        for (int j = 0; j < N; j++)     
        {
            
            
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }

    // int a1[N][N]={NULL};
    


    for(int i=0;i<N;i++)
    {
        for (int j = i; j < N; j++)     
        {
            if(a[i][j]==a[i][i] || a[i][j]==a[j][j] )
            continue;
            else{
                //swap
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;

            }
        }
        
    }

    cout<<"Transversed Matrix Is : \n";
    for(int i=0;i<N;i++)
    {
        for (int j = 0; j < N; j++)     
        {
            
            
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }

    

    return 0;
}