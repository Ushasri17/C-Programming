/*Code for a Basic Salary of an employee its gross salary a/c to this*/
//Basic Salary<=10000 : HRA=20%, DA=80%
//Basic Salary<=20000 : HRA=25%, DA=90%
//Basic Salary<=20000 : HRA=30%, DA=95%

#include<stdio.h>
int main () {
    //Creating Variables
    float basic, gross, da, hra;

    //Taking inputs from the user
    printf("Enter basic salary of an employee : ");
    scanf("%f",&basic);

    /*Calculation for HRA and DA*/
    if (basic <= 10000)
    {
        da = basic * 0.8;
        hra = basic * 0.2;
    }
    else if (basic <= 20000)
    {
        da = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.95;
        hra = basic * 0.3;
    }

    //Calculating the Gross Salary
    gross = basic + hra + da;

    printf("Gross Salary of an Employee = %.2f",gross);

    return 0;
}