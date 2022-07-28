// 16.2 -- find first occcurence and last occurence of given array;



#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[],int n,int key,int i=0)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }

    return firstocc(arr,n,key,i+1);
}



// Last Occurence -->

// METHOD 1 :
/*
int lastocc(int arr[],int size,int key,int i=0,int j=0)
{
    

    if(i==size)
    return j;
    
    else if(arr[i]==key)
    {
        j=i;
    }
    
    i++;

    return lastocc(arr,size,key, i,j);
}
*/

//METHOD 2(reverse transversing) :
/*
int lastocc(int arr[],int size,int key,int i)
{
    

    if(i==0)
    return -1;
    
    else if(arr[i]==key)
    {
        return i;
    }
    
    i--;

    return lastocc(arr,size,key, i);
}
*/

//METHOD 3 : 
int lastocc(int arr[],int n,int key,int i=0)
{
    if(i==n)
    {
        return -1;
    }
    int restarr=lastocc(arr,n,key,i+1);
    if(restarr != -1)
    return restarr;


    if(arr[i]==key)
    {
        return i;
    }

    return -1;
}





int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,2)<<endl;
     // METHOD 1 
     // cout<<lastocc(arr,7,2)<<endl;

     //METHOD 2
    //  cout<<lastocc(arr,7,2,7-1);
     
     //METHOD 3
     cout<<lastocc(arr,7,2);
    return 0;
}