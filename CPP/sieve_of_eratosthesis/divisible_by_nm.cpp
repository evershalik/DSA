// 15.2 -- howmany no. are there between 1 and 1000 which are divisible by 5 or 7;


#include <bits/stdc++.h>
using namespace std;

int divisibleBy(int n,int m)
{
    int count=0;
    for (int i = 0; i < 1000; i++)
    {
        if(i%n == 0 || i%m==0)
        {
            count ++;

        }
    }
    return count;
    
}

//or

int divisibleby(int n, int m)
{
    int count1,count2,count3;
    count1=count2=count3=0;
    for (int i = 0; i < 1000; i++)
    {
        if(i%n==0)
        count1++;

        else if(i%m==0)
        count2++;

        else if(i%n == 0 && i%m==0)
        count3++;
    }

    return (count1+count2-count3);
    
}

//or

int divisible_by(int n, int m)
{
    int count, count1,count2,count3;
    count1=count2=count3=0;
    count1=1000/n;
    count2=1000/m;
    count3=1000/(n*m);
    count=(count1+count2-count3);
    return count;
}

int main()
{
    int n,m;
    n=5,m=7;

    cout<<divisibleBy(n,m)<<endl;
    cout<<divisibleby(n,m)<<endl;
    cout<<divisible_by(n,m)<<endl;

}