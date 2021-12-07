#include "operations.h"


int main(int argc, char *argv[])
{
    return calculate(argc, argv);
}

/*
 Wie kompiliert man mehrere Files?

 gcc -Wall -Werror operations.c calculator.c -o calculator

 Es werden alle .c-Files aufgelistet, aber keine .h-Files.
 Das Header-File wird durch die direktive -- #include "operations.h" -- im Source File automatisch an der
 richtigen Stelle inkludiert.
 */
