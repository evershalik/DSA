// 9.1 -- SPIRAL ORDER MATRIX TRANSVERSAL.

#include<iostream>
using namespace std;


int main()
{
    cout<<"Let's Start :\n";
    int r,c;
    cin>>r>>c;
    int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    } 
       /*
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    } 
    */
int row_start=0,row_end=r-1,col_start=0,col_end=c-1;
   while(row_start<=row_end && col_start <= col_end)
   {
       
    
    //for row_start
    for(int i=col_start;i<=col_end;i++){
        cout<<arr[row_start][i]<<" ";
    }
    row_start++;

    //for col_end
    for(int j=row_start;j<=row_end;j++){
        cout<<arr[j][col_end]<<" ";
    }

    col_end--;

    // for row_end
    for(int i=col_end;i>=col_start;i--){
        cout<<arr[row_end][i]<<" ";
    }
    row_end--;

    //for col_start
     for(int j=row_end;j>=row_start;j--){
        cout<<arr[j][col_start]<<" ";
    }
    col_start++;
  

   }
    









    return 0;
}
