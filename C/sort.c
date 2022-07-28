
#include<stdio.h>

int main()
{
    int a[5];
    int i,j;

    printf("enter values of array :");
    for(i=0;i<5;i++)
    scanf("%d", &a[i]);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]>a[i])
            {
                int b=a[j];
                a[j]=a[i];
                a[i]=b;
            }

        }
    }
    printf("\n descending order is :");
    for(i=0;i<5;i++)
    printf("\t%d  ", a[i]);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                int b=a[j];
                a[j]=a[i];
                a[i]=b;
            }

        }
    }
    printf("\n ascending order is :");
    for(i=0;i<5;i++)
    printf("\t%d  ", a[i]);

    return 0;
}
