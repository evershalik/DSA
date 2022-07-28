# include <stdio.h>
/*
print the table of a number inputed by the user
*/

int main()
{
    /* code */
    int n,i;
    printf("Enter the number you want multiplication table of :");
    scanf("%d", &n);
    printf("\nTable of %d is :",n);
    for(i=1;i<=10;i++)
    printf("\n%d * %d = %d",n,i,n*i);
    
    // printf("\f sound is \f and my name is \t \" \xF  \0 SHANKAR");
    return 0;
}
