// C program to count number of digits in a number.

#include<stdalign.h>
int main()
{
    

    int n,a,sum=0;
    printf("enter any number");
    scanf("%d", &n);
    a=n;

    while(a!=0)
    {

        a=(a/10);
        sum=sum+1;
    }
    printf("number of digits in %d = %d",n,sum);

    return 0;
}