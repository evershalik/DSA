// 16.2 -- check if a given array is sorted or not;


#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int size)
{
    if(size==1)
      return true;
    // bool restArray=sorted(arr+1,size-1);
    return (arr[0]<arr[1] && sorted(arr+1,size-1));
}

int main()
{
    int size=5;
    int arr[size]={1,2,8,4,5};
    cout<<sorted(arr,size);
}