#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a=0,b=1,c,n;
    printf("enter any number:");
    scanf("%d", &n);
    printf("%d %d",a,b);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        
        printf(" %d ",c);
    }
    printf("\n");
}