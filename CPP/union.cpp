#include <iostream>
using namespace std;

union eatables //in case of unions we can use only one at a  time out of the three below hence it reduce memory consumption..
{
    int candy;
    int choclates;
    int kurkure;

};


int main()
{
    cout << "Union is created "<<endl;
    union eatables home;
    home.candy=12;
    // home.kurkure=10;
    cout<<home.candy; /*now here if     home.kurkure=10;
    we use  it will not print value of candy as kurkure is overwritten so it can return garbage vallue; */



    return 0;
}