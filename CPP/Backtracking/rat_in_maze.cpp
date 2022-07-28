// 18.1 --> give a particular solution for solving rat in a maze.


#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n and y < n and arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool rat_in_maze(int **arr, int x, int y, int n, int **ansArr)
{
    if (x == (n - 1) and y == (n - 1))
    {
        ansArr[x][y] == 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        ansArr[x][y] = 1;
        if (rat_in_maze(arr, x + 1, y, n, ansArr))
        {
            return true;
        }
        if (rat_in_maze(arr, x, y + 1, n, ansArr))
        {
            return true;
        }
        ansArr[x][y] = 0; // backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int **arr = new int* [n]; // memory allocation
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j]; 
        }
    }

    /*
    1 0 1 0 1
    1 1 1 1 1
    0 1 0 1 0
    1 0 0 1 1
    1 1 1 0 1
    */

    int **ansArr = new int *[n]; // memory allocation
    for (int i = 0; i < n; i++)
    {
        ansArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            ansArr[i][j] = 0;
        }
    }

    cout<<endl;

    if (rat_in_maze(arr, 0, 0, n, ansArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ansArr[i][j] << " ";
            }
            cout << endl;
        }
    }
}