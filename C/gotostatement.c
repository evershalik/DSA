// goto  is a jump statement

#include<stdio.h>

int main()
{
    printf("---------------------------\n");
    for(int i=0;i<11;i++)
    {
        printf("value of i is : %d \n",i);
        for(int j=0;j<11;j++)
        {
            printf("enter value of j  or if you want ot exit enter 0 :");
            int num;
            scanf("%d", &num);
            if (num==0)
            {
                goto end;
            }
            
            
        }
    }
    end:
    printf("end of the loop");

    return 0;
}
