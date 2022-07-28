#include<stdio.h>
#include<string.h>

int main()
{
    // char s[50]="CHANDIGARH UNIVERSITY";
    // char b[50]={'c','h','a','n','d','i','g','a','r','h'};
    char s[50];
    puts("enter your string :");
    gets(s);
    puts(strlwr(s));
    puts(strupr(s));
    printf("length is %zu",strlen(s)); // using the %zu format specifier to print size_t

    // puts(b);
    // printf("\nlength is %zu",strlen(b));

    char c[50];
    strcpy(c,s); //it copy value of s to c
    printf("\n");
    
    puts(c);

    puts(strcat(s, c)); //strcat() concatenate the two strings

    int d = strcmp(s,c);//The strcmp() function takes two strings and returns an integer.The strcmp() compares two strings character by character.

    printf("%d", &d);

    return 0;

}   
