# include <stdio.h>
int main ()
{
    printf("Hello user !");
    
    printf("\n__________________________________\n");
    printf("\n1.To print triangular star pattern \n2.To print reverse triangualr str pattern \n3.To exit the code\n ");
    int num;
    printf("\nKindly choose one of the following :");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
        {
            int i,j,n;
            printf("Enter number of rows fro your triangular star pattern:");
            scanf("%d", &n);
            for(i=0;i<n;i++)
            {
                for(j=0;j<i+1;j++)
                {
                    printf("*");
                }
                printf("\n");
                
            }
            break;
        }

        case 2:
        {
            int i,j,n;
            printf("Enter number of rows for your inverse triangulr star pattern:");
            scanf("%d", &n);
            for(i=n;i>0;i--)
            {
                for(j=i;j>0;j--)
                {
                    printf("*");
                }
                printf("\n");
                
            }
            break;
        }

        
        case 3:
        goto X;

        default:
        printf("\nInvalid Choice!");
    }

    X:
    printf("\nNow you are out of the code");

    return 0;
}