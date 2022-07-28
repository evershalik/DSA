// 14.2 -- WAP to generate all possible subsets of a given set.


// NOTE : 1<<i = 2 raise to power i.


#include <bits/stdc++.h>
using namespace std;



void subsets(int arr[],int n){
    for (int i = 0; i < (i<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        } 
        cout<<endl;
        
    }
    
}


int main()
{
    int arr[4]={1,2,3,4};
    subsets(arr,4);

    return 0;

}

//samaj nahi aaya

  