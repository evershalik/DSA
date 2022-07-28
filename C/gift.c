#include<stdio.h>

int main()
{
    char m,s,b,c;
    printf(" for math type m \n for science type s \n for both type b");
    printf("\nEnter the subjects in which you are pass :  ");
    scanf("%c", &c);
    if (c=='m')
    {
        printf("you are credited with a gift of RS 15\n");
    }
    else if (c=='s')
    {
        printf("you are credited with a gift of RS 15\n");
    }
    else if (c=='b')
    {
        printf("you are credited with a gift of RS 45\n");
    }
    else
    {
        printf("invalid character");
    }
    

    return 0;
}
