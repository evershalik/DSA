#include<stdio.h>

int main()
{
    int i,n;
    
    printf("\nenter any value:");
    scanf("%d", &n);
    printf("table of inputed number:%d\n",n);
    for(i=1;i<=10;++i)
    {
        printf("%d * %d=%d",n,i,i*n);
        printf("\n");
    }
}
