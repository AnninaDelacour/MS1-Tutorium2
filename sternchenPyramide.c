#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Error! Not enough arguments given!\n");
        return EXIT_FAILURE;
    }

    int total_rows = atoi(argv[1]);
    int space;
    int star;

    for(int i = 1; i <= total_rows; i++)
    {
        for(space = 1; space <= (total_rows-i); space++)
        {
            printf(" ");
        }
        for(star = 1; star <= ((2 * i) - 1); star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}