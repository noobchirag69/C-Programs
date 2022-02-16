// C Program to check whe ther a line is valid comment or not

#include <stdio.h>
#include <string.h>

// Function to check whether a line is a comment or not
void isComment(char str[], int n)
{
    int a = 0;

    if (str[0] == '/')
    {
        if (str[1] == '/')
        {
            printf("\nThis is a single-line comment!\n");
        }
        else if (str[1] = '*')
        {
            for (int i = 2; i < n; i++)
            {
                if (str[i] == '*' && str[i + 1] == '/')
                {
                    printf("\nThis is a multi-line comment!\n");
                    a = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (a == 0)
            {
                printf("\nThis is not a comment!\n");
            }     
        }
        else
        {
            printf("\nThis is not a comment!\n");
        }
    }
    else
    {
        printf("\nThis is not a comment!\n");
    }
}

// Driver Code
int main()
{
    char line[30];
    printf("\nEnter a line: ");
    fgets(line, 30, stdin);

    int len = strlen(line);

    isComment(line, len);
}