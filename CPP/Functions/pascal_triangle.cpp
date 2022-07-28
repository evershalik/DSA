#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    
    for(int i=1;i<=n;i++){
        
    fact=fact*i;
        
    }
    return fact;
    
    
}

int main()
{
    int n;
    cout<<"enter value of n :";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int iCj=factorial(i)/(factorial(i-j)*factorial(j));
            cout<<iCj<<" ";
        }
        cout<<endl;
    }


    return 0;
}