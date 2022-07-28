#include<stdio.h>

/* 1. int sum(int i, int j)
{
    return(i+j);
}
*/

/* 2. void star(int n)
{
    for(int i=0; i<n;i++)
    {
        printf("%c",'*');
    }
}
*/
int sort(int n)
{
    int a[n];
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<i;i++)
        {
            if(a[i]<a[j])
            {
                int b=a[j];
                a[j]=a[i];
                a[i]=b;
                
            }
        
        }
    }
    printf("desc order is :");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    

}

/* 3.int name()
    {
        int n;
        printf("Enter value of n:");
        scanf("%d",&n);
        return(n);
    }
*/

/* 4. void null()
{
    
    printf("Hello World");
}
*/

int main()
{
    int c;int l=4,m=5;

    /* 1. c = sum(l,m);
    
    printf("%d ",c);
    */

   /* 2.star(4);*/

    /* 3. c = name();
    printf("\n The entered number is :%d",c);
    */

//    4. null();
   

    int a[5],n,i,j;
    printf("enter values of array a :");
    
    for(i=0;i<5;i++)
    scanf("%d", &a[i]);

    sort(5);


    return 0;
}
