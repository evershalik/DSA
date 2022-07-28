// 15.1 -- find all prime no. upto a given no. using the cocncept of SIEVE OF ERATOSTHENES.

#include <bits/stdc++.h>
using namespace std;

void primeSieve(int n)
{
    int primeNo[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (primeNo[i] == 0)
        {
            for (int j = i * i; j <= n; j = j + i) // multiples of i
            {
                primeNo[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (primeNo[i] == 0)
        {

            cout << i << " ";
        }
    }
}

int main()
{
    int n = 30;
    primeSieve(n);

    return 0;
}
