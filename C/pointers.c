#include <stdio.h>
int main()
{
    // int a = 2;
    // int *ptr = &a;
    //  printf("value of a is : %d", *ptr);
    //  printf("\naddress of a is : %x", &ptr);
    //  int *ptr2= NULL;
    //  printf("\naddress of a is : %p", ptr);
    // printf("\naddress of a is : %x",a);
    // printf("\naddress of a is : %x", ptr );

    int arr[10]={1,2,3,4,5,6,7,8};
    // int * prta= &arr;
    printf("\naddress of arr is : %d", *arr );
    printf("\naddress of arr is : %d", arr[0] );
    printf("\naddress of arr is : %d", arr[1] );
    printf("\naddress of arr is : %d", *(arr+1));


    return 0;
}
