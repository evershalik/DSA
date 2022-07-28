# include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%d", sizeof(int));
    printf("%d", sizeof(unsigned int));
    printf("%d", sizeof(signed int));


    printf("%d", sizeof(float));
    printf("%d", sizeof(double));

    printf("%d", sizeof(long));
    printf("%d", sizeof(unsigned long ));
    printf("%d", sizeof(signed long));

    printf("%d", sizeof(char));
    printf("%d", sizeof(unsigned char));
    printf("%d", sizeof(signed char));

    
    return 0;
}
