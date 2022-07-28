/*
conversions:
kms to miles 
inches to foot
cms to inches
pound to  kgs
inches to meters
*/



#include<stdio.h>

float main()
{
    float km,inch1,cm,pound,inch2;
    int num;
    printf("Kindily select your choice from following\n");
    printf("\n_______________________________________________\n");
    printf("\nTo convert Kms into miles press 1\n");
    printf("To convert inches into foot press 2\n");
    printf("To convert cm into inches press 3\n");
    printf("To convert pound into kgs press 4\n");
    printf("To convert inches into meters press 5\n");
    printf("\nEnter your choice :");
    scanf("%d", &num);
    switch(num)
    {
        case 1:
        {
            //To convert Kms into miles
            printf("Enter your value in kms :");
            scanf("%f", &km);
            float a=km*0.621371;
            printf("Your Conversion of entered value into miles is :%f \n\n",a);
            break;

        }

        case 2:
        {
            // To convert inches into foot
            printf("\nEnter your value in inches :");
            scanf("%f", &inch1);
            float b=inch1*0.0833333;
            printf("Your Conversion of entered value into foot is :%f\n\n",b);
            break;

        }

        case 3:
        {
            // To convert cm into inches
            printf("\nEnter your value in cm :");
            scanf("%f", &cm);
            float c=cm*0.393701;
            printf("Your Conversion of entered value into inches is :%f \n\n",c);
            break;

        }

        case 4:
        {
            // To convert pound into kgs
            printf("\nEnter your value in pound :");
            scanf("%f", &pound);
            float d=pound*0.453592;
            printf("Your Conversion of entered value into kgs is :%f \n\n",d);
            break;

        }

        case 5:
        {
            //To convert inches into meters
            printf("\nEnter your value in inches :");
            scanf("%f", &inch2);
            float e=inch2*0.0254;
            printf("Your Conversion of entered value into meters is :%f \n\n",e);
            break;

        }

        default:
        printf("\nYour choice is invalid!");

    }
    

    
    return 0;
}
