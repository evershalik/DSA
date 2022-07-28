# include<stdio.h>

int main()
{
    int i=1,n;
    printf("enter any number : ");
    scanf("%d", &n);
    
    printf("first %d natural numbers are : ",n);
    while(i<=n)
    {
            printf("\n %d",i);
            ++i;

    }
    return 0;


}