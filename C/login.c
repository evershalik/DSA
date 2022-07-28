/* C program to validate the login credentials where correct credentials are given as:
Username: 12345
Password: 54321*/

# include<stdio.h>
int main()
{
    int u,p;

    printf("Enter username and password:\n");
    printf("Username:");
    scanf("%d", &u);
    printf("Password:");
    scanf("%d", &p);
    if(u==12345 && p==54321)
    printf("Login Successfully");
    else
    printf("invalid username and password");

    return 0;
}