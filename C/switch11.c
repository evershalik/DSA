#include<stdio.h>

int main()
{
    char c;
    printf("Enter the 1st letter of your name :");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
        printf("Your name starts with letter a");
        break;
    case 'b':
        printf("Your name starts with letter b");
        break;
    case 'c':
        printf("Your name starts with letter c");
        break;
    case 'd':
        printf("Your name starts with letter d");
        break;
    case 'e':
        printf("Your name starts with letter e");
        break;

    default:
    printf("invalid character");
        break;
    }
    
    return 0;
}
