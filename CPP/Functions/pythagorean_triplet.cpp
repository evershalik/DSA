#include <iostream>
using namespace std;

bool pythagoreanTriplet(int x,int y,int z)
{
    int a=max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;

    }
    else if(a==y)
    {
        b=x;
        c=z;
        
    }
    else
    {
        b=x;
        c=y;
        
    }

    if((a*a)==((b*b)+(c*c)))
    return true;
    else
    return false;


}

int main()
{
    /*
    int a, b, c;
    cin >> a >> b >> c;

    int d = a > b ? (a > c ? a : c) : (b > c ? b : c);
    cout << d << endl;

    if (d == a)
    {
        cout << "a is greatest" << endl;
        if ((d * d) == ((c * c) + (b * b)))
        {
            cout << "yes 1 it is PT";
        }
        else
        cout << "no 1 it is not PT";
    }
    else if (d == b)
    {
        cout << "b is greatest" << endl;
        if ((d * d) == ((c * c) + (a * a)))
        {
            cout << "yes 2 it is PT";
        }
        else
        cout << "no 2 it is not PT";
    }
    else
    {
        cout << "c is greatest" << endl;
        if ((d * d) == ((a * a) + (b * b)))
        {
            cout << "yes 3 it is PT";
        }
        else
        cout << "no 3 it is not PT";
    }
    */

   int x,y,z;
   cout<<"enter any 3 numbers :";
   cin>>x>>y>>z;
   if(pythagoreanTriplet(x,y,z))
   {
       cout<<"Pythegorean Triplet"<<endl;
   }
   else
   cout<<"not an Pythagorean Triplet";


    return 0;
}