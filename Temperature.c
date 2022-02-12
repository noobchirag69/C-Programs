// Celsius to Farhenheit & Kelvin Converter

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f, k;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);

    f = (1.8 * c) + 32;
    k = c + 273.15;

    int ans;
    printf("Which unit do you want to convert the temperature into?\n(Press 1 for Farhenheit and 2 for Kelvin): ");
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

    return 0;
}