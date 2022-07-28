// addition of two arrays

#include <stdio.h>

int main()
{
    
    int a1[5],a2[5],i,a3[5];
    printf("enter values of array a1 : \n");
    for(i=0;i<5;i++)
    scanf("%d", &a1[i]);
    
    printf("enter values of array a2 : \n");
    for(i=0;i<5;i++)
    scanf("%d", &a2[i]);
    
    for(i=0;i<5;i++)
    a3[i] =a1[i]+a2[i];
    
    printf("sum of array a1 and array a2 is : \n");
    for(i=0;i<5;i++)
    printf("%d \n", a3[i]);
    
    return 0;
}
