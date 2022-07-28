// Food Ordering project

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string pizza[4] = {"Chicken", "Hawaiian", "Margherita", "Pepperoni"};
    int pcost[3] = {99, 299, 499};
    string burger[4] = {"Rajma_Patty", "Supreme_Veggie", "Potato_Corn", "Stuffed_Bean"};
    int bcost[3] = {99, 199, 299};

    system("CLS");
    string name;
    cout << "Enter your name : ";
    cin >> name;

order:

    system("CLS");
    cout << "Hi " << name << " , What do you want to order \n1) PIZZA \n2) BURGER \n";
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;
    if (choice <= 2)
    {

        if (choice == 1)
        {
            system("CLS");
            cout << "You are in PIZZA ordering menu...\n";
            cout << "Which flavour do you want : \n";
            cout << "1) " << pizza[0] << endl;
            cout << "2) " << pizza[1] << endl;
            cout << "3) " << pizza[2] << endl;
            cout << "4) " << pizza[3] << endl;
            int flavour;
            cin >> flavour;
            system("CLS");

            cout << "Enter type of pizza you want  : \n";
            cout << "1) Small Size Rs.99" << endl;
            cout << "2) Medium Size Rs.299" << endl;
            cout << "3) Large Size Rs.499" << endl;
            int type;
            cin >> type;

            int qty;
            cout << "Enter your Quantity : ";
            cin >> qty;
            system("CLS");

            switch (type)
            {

            case 1:
                cout << "You have ordered " << qty << " " << pizza[flavour - 1] << " Small Size"
                     << " Pizzas " << endl;
                cout << "Your total amount is : "
                     << " Rs. " << (qty * pcost[type - 1]) << endl;
                cout << "\nDo you want to order again ? \nType y for Yes or Type anything else for for No : ";
                char ch;
                cin >> ch;
                if (ch == 'y' or ch == 'Y')
                {
                    goto order;
                }
                else
                    cout << "\n\n*********************Thank you for ordering*******************\n " << endl;

                system("pause");

                break;

            case 2:
                cout << "You have ordered " << qty << " " << pizza[flavour - 1] << " Medium Size"
                     << " Pizzas " << endl;
                cout << "Your total amount is : "
                     << " Rs. " << (qty * pcost[type - 1]) << endl;
                cout << "\nDo you want to order again ? \nType y for Yes or Type anything else for for No : ";
                char ch1;
                cin >> ch1;
                if (ch1 == 'y' or ch1 == 'Y')
                {
                    goto order;
                }
                else
                    cout << "\n\n*********************Thank you for ordering*******************\n " << endl;

                system("pause");

                break;

            case 3:
                cout << "You have ordered " << qty << " " << pizza[flavour - 1] << "Large Size"
                     << " Pizzas " << endl;
                cout << "Your total amount is : "
                     << " Rs. " << (qty * pcost[type - 1]) << endl;
                cout << "\nDo you want to order again ? \nType y for Yes or Type anything else for for No : ";
                char ch2;
                cin >> ch2;
                if (ch2 == 'y' or ch2 == 'Y')
                {
                    goto order;
                }
                else
                    cout << "\n\n*********************Thank you for ordering*******************\n " << endl;

                system("pause");

                break;

            default:
                cout << "please select a valid option !!" << endl;
                cout << "Do you want to select again ? If yes then type y or Y : ";
                char c;
                cin >> c;
                if (c == 'y' or c == 'Y')
                {
                    goto order;
                }
                else
                    cout << "Bye, Have a Good Day.";
            }
        }

        else if (choice == 2)
        {
            system("CLS");
            cout << "You are in BURGER ordering menu...\n";
            cout << "Which flavour do you want : \n";
            cout << "1) " << burger[0] << endl;
            cout << "2) " << burger[1] << endl;
            cout << "3) " << burger[2] << endl;
            cout << "4) " << burger[3] << endl;
            int flavour;
            cin >> flavour;
            system("CLS");

            cout << "Enter type of Burger you want  : \n";
            cout << "1) Small Size Rs.99" << endl;
            cout << "2) Medium Size Rs.199" << endl;
            cout << "3) Large Size Rs.299" << endl;
            int type;
            cin >> type;

            int qty;
            cout << "Enter your Quantity : ";
            cin >> qty;
            system("CLS");

            switch (type)
            {

            case 1:
                cout << "You have ordered " << qty << " " << burger[flavour - 1] << " Small Size"
                     << " Burgers " << endl;
                cout << "Your total amount is : "
                     << " Rs. " << (qty * bcost[type - 1]) << endl;
                cout << "\nDo you want to order again ? \nType y for Yes or Type anything else for for No : ";
                char ch;
                cin >> ch;
                if (ch == 'y' or ch == 'Y')
                {
                    goto order;
                }
                else
                    cout << "\n\n*********************Thank you for ordering*******************\n " << endl;

                system("pause");

            case 2:
                cout << "You have ordered " << qty << " " << burger[flavour - 1] << " Medium Size"
                     << " Burgers " << endl;
                cout << "Your total amount is : "
                     << " Rs. " << (qty * bcost[type - 1]) << endl;
                cout << "\nDo you want to order again ? \nType y for Yes or Type anything else for for No : ";
                char ch1;
                cin >> ch1;
                if (ch1 == 'y' or ch1 == 'Y')
                {
                    goto order;
                }
                else
                    cout << "\n\n*********************Thank you for ordering*******************\n " << endl;

                system("pause");

                break;

            case 3:
                cout << "You have ordered " << qty << " " << burger[flavour - 1] << "Large Size"
                     << " Burgers " << endl;
                cout << "Your total amount is : "
                     << " Rs. " << (qty * bcost[type - 1]) << endl;
                cout << "\nDo you want to order again ? \nType y for Yes or Type anything else for for No : ";
                char ch2;
                cin >> ch2;
                if (ch2 == 'y' or ch2 == 'Y')
                {
                    goto order;
                }
                else
                    cout << "\n\n*********************Thank you for ordering*******************\n " << endl;

                system("pause");

                break;

            default:
                cout << "please select a valid option !!" << endl;
                cout << "Do you want to select again ? \nIf yes then type y or Y : ";
                char c;
                cin >> c;
                if (c == 'y' or c == 'Y')
                {
                    goto order;
                }
                else
                    cout << "Bye, Have a Good Day.";

                break;
            }
        }
    }
    else
    {
        cout << "\nInvalid choice !! " << endl
             << endl;
        cout << "Do you want to select again ? \nIf yes then type y or Y : ";
        char c;
        cin >> c;
        if (c == 'y' or c == 'Y')
        {
            goto order;
        }
        else
            cout << "\n~~~~~~~~~~~~~ Bye, Have a Good Day. ~~~~~~~~~~~~~~~~~~~~";
    }
}