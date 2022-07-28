#include <iostream>
using namespace std;

int main()
{
    int r = 4, c = 4;
    int a[r][c] = {{1, 2, 3, 8},
                   {4, 5, 6, 15},
                   {7, 8, 9, 1},
                   {11, 12, 13 , 14}};

    int r_start, c_start, r_end, c_end;
    r_start = c_start = 0;
    r_end = r - 1;
    c_end = c - 1;

    while (r_start <= r_end && c_start <= c_end)
    {
        //start row
        for (int i = c_start; i <= c_end; i++)
        {
            cout << a[r_start][i] << " ";
        }
        r_start++;

        //end col
        for (int i = r_start; i <= r_end; i++)
        {
            cout << a[i][c_end] << " ";
        }
        c_end--;

        // end row
        for (int i = c_end; i >= c_start; i--)
        {
            cout << a[r_end][i] << " ";
        }
        r_end--;

        //start col
        for (int i = r_end; i >= r_start; i--)
        {
            cout << a[i][c_start] << " ";
        }
        c_start++;
    }

    return 0;
}