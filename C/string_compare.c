/*
#include<stdio.h>
#include<string.h>

int main()
{

    char a[5],b[5];
    puts("enter value of a:");
    gets(a);
    int i;
    for(i=0;i<5;i++);
    {
        b[i]=a[i];

    }
    b[i] = '\0';

    printf("%s",b);
    
    return 0;
}
*/
#include <stdio.h>
int main()
{
 char text1[15];
 char text2[15];
 int i;
 printf("Enter any string: ");
 gets(text1);
  for(i=0; text1[i]!='\0'; i++)
 {
 text2[i] = text1[i];
 }

 text2[i] = '\0';
 printf("First string = %s\n", text1);
 printf("Second string = %s\n", text2);
 printf("Total characters copied = %d\n", i);

 return 0;
}
