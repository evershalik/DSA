// 10 --to find the largest word in a given sentence;

#include <iostream>
using namespace std;
#include<string.h>


int main()
{
    int n=0;
    cin>>n;
    cin.ignore();
    char a[n+1]="hi hello bye";
    cin.getline(a,n+1,';');
    cin.ignore();
    // cin.ignore();
    cout<<a;
    
    int count=0,max=0;
    int i=0;
    int st,maxst;
    st=maxst=0;
    
    while(true)
    {
        if(a[i] == '\0' || a[i] == ' '){

            if(count>max)
            {
                max=count;
                maxst=st;
            }
            count=0;
            st=i+1;//index after space character;
        }

        else{
            count++;
        }
        
    
        if(a[i] == '\0') // it break the whole loop at last element of sentence.
            break;



        i++;


    }

    cout<<"\nLargest word is of : "<<max<<" characters\n";

    cout<<"The word is : ";
        for (int  i = 0; i < max; i++)
        {
            cout<<a[i+maxst];
        }
        

        






    return 0;

}