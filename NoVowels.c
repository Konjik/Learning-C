#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Define the replace function
char* replace(char* input) {
    for (int i = 0; i < strlen(input); i++) {
        switch (input[i]) {
            case 'a':
                input[i] = '6';
                break;
            case 'e':
                input[i] = '3';
                break;
            case 'i':
                input[i] = '1';
                break;
            case 'o':
                input[i] = '0';
                break;
            // 'u' does not change
        }
    }
    return input;
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./NoVowels word\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]))
        {
            printf("Usage: ./NoVowels word\n");
            return 1;
        }
        
    }

    // Call the replace function and print the result
    
}

