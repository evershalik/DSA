#include<stdio.h>


int main()


{ 
    int m,n,o,p,e;
    
    printf("enter value of m");
    scanf("%d", &m);
    printf("enter value of n");
    scanf("%d", &n);
    printf("enter value of o");
    scanf("%d", &o);
    printf("enter value of p");
    scanf("%d", &p);
    
    


e=(m++)+(--n)-(++o)+(p--);

printf("value of e is :%d\n",e);
switch (e)
{
    case 1 :
    {
        printf("case 1");
        break;
    }
    case 2 :
    {
        printf("case 2");
        break;
    }
    case 3 :
    {
        printf("case 3");
        break;
    }
    case 4 :
    {
        printf("case 4");
        break;
    }
    default:
    printf("default");
    
    
    
}
  return 0;
  
 }
