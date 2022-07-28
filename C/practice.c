/*
#include<stdio.h>

int main()
{
    printf("Enter the length of your array :");
    int num;
    scanf("%d", &num);
    int a[num];
    printf("\nEnter values of array :");
    int j=num;
    while(j>0)
    {
        scanf("%d", &a[j]);
        j--;
    }
    printf("\n value of num is: %d",num);
    printf("\n Array is :");

    for(int i=0;i<num;i++)
    printf("%d", a[i]);

    return 0;
}
*/


#include<stdio.h>

int main()
{
    char a[10]="nitin";

    printf("%c", a[0]);
    return 0;
}
