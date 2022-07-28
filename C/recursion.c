// factorial of any number using recursion function

#include<stdio.h>


int main()
{
    int factorial(int num)
    {
        if(num==1 || num==0)
        {
            return 1;
        }
        else{
            return (num*factorial(num-1));
        }
    }

    printf("enter any number to find factorial :");
    int num;
    scanf("%d", &num);
    printf("\n Factorial of %d is %d",num,factorial(num));
    return 0;
}
