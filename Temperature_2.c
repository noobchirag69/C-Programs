// C Program to convert temperature in Celsius/Farhenheit/Kelvin into Celsius/Farhenheit/Kelvin, based on user's choice

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t, c, f, k;

    printf("Enter the temperature: ");
    scanf("%f", &t);

    int unit;
    printf("Enter the unit << Press 1 for Celsius, 2 for Farhenheit and 3 for Kelvin >>: ");
    scanf("%d", &unit);
    
    if(unit == 1)
    {
        f = ((9.0 / 5.0) * t) + 32;
        k = t + 273.15;

        int ans;
        printf("Which unit do you want to convert the temperature into? << Press 1 for Farhenheit and 2 for Kelvin >>: ");
        scanf("%d", &ans);

        if(ans == 1)
        {
            printf("\nThe temperature in Farhenheit: %f\n", f);
        }
        else if(ans == 2)
        {
            printf("\nThe temperature in Kelvin: %f\n", k);
        }
        else
        {
            printf("\nInvalid input!\n");
        }
    }
    else if(unit == 2)
    {
        c = (5.0 / 9.0) * (t - 32);
        k = ((5.0 / 9.0) * (t - 32)) + 273.15;

        int ans;
        printf("Which unit do you want to convert the temperature into? << Press 1 for Celsius and 2 for Kelvin >>: ");
        scanf("%d", &ans);

        if(ans == 1)
        {
            printf("\nThe temperature in Celsius: %f\n", c);
        }
        else if(ans == 2)
        {
            printf("\nThe temperature in Kelvin: %f\n", k);
        }
        else
        {
            printf("\nInvalid input!\n");
        }
    }
    else if(unit == 3)
    {
        c = t - 273.15;
        f = ((t - 273.15) * (9.0 / 5.0)) + 32;

        int ans;
        printf("Which unit do you want to convert the temperature into? << Press 1 for Celsius and 2 for Farhenheit >>: ");
        scanf("%d", &ans);

        if(ans == 1)
        {
            printf("\nThe temperature in Celsius: %f\n", c);
        }
        else if(ans == 2)
        {
            printf("\nThe temperature in Farhenheit: %f\n", f);
        }
        else
        {
            printf("\nInvalid input!\n");
        }
    }
    
    return 0;
}