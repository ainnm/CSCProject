#include <stdio.h>
#include <string.h>

int main()
{

    char letter;
    char same[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    printf("Insert your character: ");
    scanf(" %c", letter);

    if (letter == "abcdef")
    {
        printf("You fixed it");
    }
    else
    {
        printf("Invalid");
    }

    printf("Hi");
}