// this code is for switch statement

#include<stdio.h>
int main()
{
    char c;
    printf("enter any vowel:");
    scanf("%c", &c);
    
    switch(c)
    {
        case 'a':
        printf("this is case of letter a");
        break;

        case 'e':
        printf("this is case of letter e");
        break;

        case 'i':
        printf("this is case of letter i");
        break;

        case 'o':
        printf("this is case of letter o");
        break;

        case 'u':
        printf("this is case of letter u");
        break;

        default:
        printf("this is not a vowel");

    }
    return 0;
}