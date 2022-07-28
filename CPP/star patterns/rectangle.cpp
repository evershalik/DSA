# include<iostream>
using namespace std;

int main()
{
    int i,j,rows,columns;
    cout<<"enter no of rows and columns: ";

    cin>>rows>>columns;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=columns;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }


    return 0;
}