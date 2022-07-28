# include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,division,rem;
    printf("hello world");
    printf("\n enter any two number and you will get their arithematic operations:\n");
    scanf("%d%d", &a, &b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    division=a/b;
    rem=a%b;
    printf("\nsum of a and b is:%d",sum);
    printf("\nsub of a and b is:%d",sub);
    printf("\nmul of a and b is:%d",mul);
    printf("\ndivision of a and b is:%d",division);
    printf("\nrem of a and b is:%d",rem);

    return 0;
    

}