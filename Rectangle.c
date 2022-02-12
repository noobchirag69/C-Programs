#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float l, b;

    printf("Enter length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &b);

    float area = l * b;
    float perimeter = 2 * (l + b);

    int ans;
    printf("What do want to find out?\n(Press 1 for Area and 2 for Perimeter): ");
    scanf("%d", &ans);

    if(ans == 1)
    {
        printf("\nArea of the rectangle: %f\n", area);
    }
    else if(ans == 2)
    {
        printf("\nPerimeter of the rectangle: %f\n", perimeter);
    }
    else
    {
        printf("\nInvalid input\n");
    }

    return 0;
}