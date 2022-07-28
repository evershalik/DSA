
#include<stdio.h>


int main()
{
    int fibbonaci(int num)
    {
        int i,c;
        int f=0;
        int a=0,b=1;
        printf("0 1");
        for(i=1;i<num;i++)
        {
            
            f=a+b;
            a=b;
            b=f;

            
            printf(" %d",f);
        }
        return 0;
    }
    // printf("Fibbonaci series is :\n");
    printf("enter any number :");
    int num;
    scanf("%d", &num);
    printf("\nfibbonaci series is :");


    
    fibbonaci(num);

    return 0;
}
