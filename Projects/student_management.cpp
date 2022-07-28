#include <iostream>
using namespace std;

int rollNo[10], admno[10];
string name[10], course[10];
char gender[10];

int num;

void insert()
{
    int i = 0;
    int n;
    cout << "No of students you want to enter data for : ";
    cin >> num;
    n = num;

    while (n > 0)
    {
        cout << "Enter details of student " << i + 1 << endl;

        cout << "Enter your rollNo : ";
        cin >> rollNo[i];
        cout << "Enter your admno : ";
        cin >> admno[i];
        cout << "Enter your name : ";
        cin >> name[i];
        cout << "Enter your course : ";
        cin >> course[i];
        cout << "Enter your gender : ";
        cin >> gender[i];
        n--;
        i++;
        cout << endl;
    }
}

void display()
{
    int i = 0;
    int n;
    n = num;
    while (n > 0)
    {
        cout << "details of student " << i + 1 << " are :" << endl;
        cout << "admno is : " << admno[i] << endl;
        cout << "name is : " << name[i] << endl;
        cout << "course is : " << course[i] << endl;
        cout << "gender is : " << gender[i] << endl;
        cout << "rollNo is : " << rollNo[i] << endl;
        n--;
        i++;
        cout << endl;
    }
}

void search()
{
    int n;
    cout << "Enter the rollNo you want to search for : ";
    cin >> n;
    int n1;
    n1 = num;
    bool flag = 0;
    for (int i = 0; i < n1; i++)
    {
        if (n == rollNo[i])
        {
            cout << "admno is : " << admno[i] << endl;
            cout << "name is : " << name[i] << endl;
            cout << "course is : " << course[i] << endl;
            cout << "gender is : " << gender[i] << endl;
            cout << "rollNo is : " << rollNo[i] << endl;
            flag = 1;
            break;
        }
    }
    if (!flag)
    {
        cout << "Invalid RollNo." << endl;
    }
}

void update()
{
    int n;
    cout << "Enter the rollNo you want to update the details for : ";
    cin >> n;
    int n1 = num;
    bool flag = 0;
    for (int i = 0; i < n1; i++)
    {
        if (n == rollNo[i])
        {
            cout << "Enter your rollNo : ";
            cin >> rollNo[i];
            cout << "Enter your admno : ";
            cin >> admno[i];
            cout << "Enter your name : ";
            cin >> name[i];
            cout << "Enter your course : ";
            cin >> course[i];
            cout << "Enter your gender : ";
            cin >> gender[i];
            flag = 1;
            cout << "Your details have benn updated<<endl";
            break;
        }
    }
    if (!flag)
        cout << "invalid rollNo" << endl;
}

void deletion()
{
    int n;
    cout << "Enter the rollNo you want to delete the details for : ";
    cin >> n;
    int n1 = num;
    for (int i = 0; i < n1; i++)
    {
        if (n == rollNo[i])
        {
            rollNo[i] = rollNo[i + 1];
            admno[i] = admno[i + 1];
            name[i] = name[i + 1];
            course[i] = course[i + 1];
            gender[i] = gender[i + 1];
        }
    }
}

int main()
{
X:
    int choice;

    cout << "\n\nPress 1 to insert data." << endl;
    cout << "Press 2 to show data." << endl;
    cout << "Press 3 to search data." << endl;
    cout << "Press 4 to update data." << endl;
    cout << "Press 5 to delete data." << endl;
    cout << "Press 6 to exit." << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        insert();
        goto X;
        break;
    case 2:
        display();
        goto X;
        break;
    case 3:
        search();
        goto X;
        break;
    case 4:
        update();
        goto X;
        break;
    case 5:
        deletion();
        goto X;
        break;
    case 6:
        exit(12);
        break;

    default:
        break;
    }

    return 0;
}