
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("Error! Not enough arguments given!\n");

        return EXIT_FAILURE;
    }

    int n = atoi(argv[1]);
    int counter = 0;

    for (int i = 2; i <= n; i++)
    {
        int flag = 1;

        for(int j = 2; j <= (i/2); j++)
        {
            if((i % j) == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%4d", i);
            counter++;
            if(counter % 10 == 0)
            {
                printf("\n");
            }
        }
    }

    return EXIT_SUCCESS;
}