#include <stdio.h>

int main()
{
    int integer = 10;
    do
    {
        integer += 1;
        printf("%d", integer);
    } while (integer < 10);

    return 0;
}
