// 18.1  --> we have to place n queens in a given board of size n so that he queens olaced will not be able to cancel out each outher.

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    // checking each row for each column
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }
    int row = x;
    int col = y;

    // checking for backward up diagonal
    while (row >= 0 and col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;

    // chacking for forward up diagonal
    while (row >= 0 and col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }

        row--;
        col++;
    }

    // else if none of above return false
    return true;
}

bool nQueen(int **arr, int x, int n)
{

    if (x >= n)
    {
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;

            if (nQueen(arr, x + 1, n))
            {
                return true;
            }

            arr[x][col] = 0; // backtracking
        }
    }
    return false;
}

int main()
{

    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    // output
    if (nQueen(arr, 0, n))
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}