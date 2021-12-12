#include "operations.h"


int main(int argc, char *argv[])
{
    return calculate(argc, argv);
}

/*
 Wie kompiliert man mehrere Files?

 >> Erstellen von Objekts, welche am Ende zu einer Executable zusammengeführt werden:
    gcc -Wall -Werror -c -o calculator.o calculator.c
    gcc -Wall -Werror -c -o operations.o operations.c
    gcc -o calculator operations.o calculator.o

 >> Schnelle Variante:
    gcc -Wall -Werror operations.c calculator.c -o calculator

 Es ist also beides möglich; beides führt zum selben Ergebnis.

 Es werden alle .c-Files aufgelistet, aber keine .h-Files.
 Das Header-File wird durch die Präprozessor-Direktive -- #include "operations.h" -- im Source File automatisch an der
 richtigen Stelle inkludiert.

 Bei großen Projekten mit vielen Quellcode-Dateien macht es einen Unterschied in der Kompilierzeit,
 ob wir immer wieder aufs Neue alle Headerfiles kompilieren, oder ob wir nur vereinzelt jene neu kopmilieren,
 in denen Änderungen vorgenommen wurden -> inkrementelles Kompilieren!
 */
