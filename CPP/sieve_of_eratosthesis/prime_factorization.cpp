// 15.1 -- Prime factorization using sieve of eratosthenes.

#include <bits/stdc++.h>
using namespace std;


void primeFactor(int n)
{
    int primeNo[100]={0};
    for (int i = 2; i <=n; i++)
    {
        primeNo[i]=i;
    }

    for (int i = 2; i <=n; i++)
    {
        if(primeNo[i]==i)
        {
            for (int j = i*i; j <= n; j += i)
            {
                if(primeNo[j]==j)
                {
                    primeNo[j]=i;
                }
            }
            
        }
    }

    while(n != 1)
    {
        cout<<primeNo[n]<<" ";
        n = n/primeNo[n];
    }
    
}


int main()
{
    int n=42;
    primeFactor(n);

    return 0;
}
