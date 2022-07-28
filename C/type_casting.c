

// type casting syntax

#include <stdio.h>

int main()
{
    int a;
    float b;

    a = 3;
    b = (float)34 / 7;

    printf("value of b is :\t %f", b);
    printf("\nlocation of b is :\t %d", &b);
    printf("\nlocation of a is :\t %d", &a );
    return 0;
}
