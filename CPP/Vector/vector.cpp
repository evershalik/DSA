// 19 --> basic vector functions
// Vector = Dynamic array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1(3, 50); // arr1 = 50 50 50;
    vector<int> arr;

    // inserting values :
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    // stored in 1 2 3 manner.

    // Outputing values :

    // Method 1 :-> normal method
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Method 2 :-> using iterator
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Method 3 :-> using auto
    for (auto element : arr)
    {
        cout << element << " ";
    }
    cout << endl;

    // poping values : removing values
    arr.pop_back(); // remove last element from the vector, so now arr is : 1 2

    // swaping two vectors
    swap(arr, arr1);

    cout << "values of arr : ";
    for (auto element : arr)
    {
        cout << element << " ";
    }
    cout << endl;

    cout << "values of arr1 : ";
    for (auto element : arr1)
    {
        cout << element << " ";
    }
    cout << endl;

    // sorting a vector
    // sort(arr.begin(),arr.end()); //ascending order.

    // pair function
    pair<int, char> a;
    a.first = 3;
    a.second = 'c';

    return 0;
}