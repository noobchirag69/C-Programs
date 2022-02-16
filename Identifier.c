// C program to check whether a user given identifier is valid or not

#include <stdio.h>
#include <string.h>

// Function to check for valid identifier
int isValid(char str[], int n)
{
    // If the 1st character is invalid
    if (!((str[0] >= 'a' && str[0] <= 'z') 
          || (str[0] >= 'A' && str[0] <= 'Z') 
          || str[0] == '_'))
        return 0;

    // Traverse the string for the all of the characters
    for (int i = 1; i < n; i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') 
              || (str[i] >= 'A' && str[i] <= 'Z') 
              || (str[i] >= '0' && str[i] <= '9') 
              || str[i] == '_'))
            return 0;
    }

    // String is a valid identifier
    return 1;
}

// Driver Code
int main()
{
    char pass[10];
    int length = strlen(pass);
    
    printf("Enter an identifier: ");
    scanf("%s", pass);
    
    if (isValid(pass, length) == 1)
    {
        printf("\nValid Identifier!\n");
    }
    else
    {
        printf("\nInvalid Identifier!\n");
    }

    return 0;
}