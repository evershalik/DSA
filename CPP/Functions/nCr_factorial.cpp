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
    int n,r;
    cout<<"enter value of n: ";
    cin>>n;
    cout<<"enter value of r: ";
    cin>>r;
    
    int nCr=factorial(n)/(factorial(n-r)*factorial(r));
    cout << nCr;



    return 0;
}