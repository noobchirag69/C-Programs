#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;

    printf("Enter your grade (A-F): ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("You did great!\n");
            break;
        case 'B':
            printf("You did alright!\n");
            break;
        case 'C':
            printf("You did poorly!\n");
            break;
        case 'D':
            printf("You did bad!\n");
            break;
        case 'E':
            printf("You did very bad!\n");
            break;
        case 'F':
            printf("You failed!\n");
            break;
        default:
            printf("Invalid Grade!\n");
    }

    return 0;
}