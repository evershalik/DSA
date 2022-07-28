# include <stdio.h>
int main ()
{
    
    int i,j,k,n,l,m;
    printf("Enter number of rows for your inverse triangulr star pattern:");
    scanf("%d", &n);
    m=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf(" ");
        }
        
        for(k=m;k>0;k--)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
    
    
        
    return 0;
}