#include <stdio.h>
#include <stdlib.h>

// FUNKTIONS-DEKLARATION UND DEFINITION

/*
 Funktionen in C bestehen aus einem Rückgabetyp (void, int, double,...), einem Namen und einem Klammernpaar "()".
 Der Funktionskörper (Function body) wird mit "{ }" dargestellt.
 Die Main-Funktion ist genau so aufgebaut!
 -> int main() {}
 int = Rückgabetyp = Datentyp
 main = Funktionsname
 () = Parameterliste, die leer sein kann
 {} = Function body bzw. Anweisungsblock

 Weil wir also einen Rückgabetyp vom Datentyp "int" haben, geben wir eine Ganzzahl mit "return" zurück
 -> WH: Erfolgreicher Programmablauf = return 0
 */



// Die Funktion printIfEven wird hier deklariert UND definiert!
void printIfEven(int number);


// Die Funktion receiveUserInput() wird hier nur deklariert! Wir müssen sie noch nicht definieren.
// Außerdem können wir sie an einer beliebigen Stelle definieren(!) -> deklariert werden muss sie jedoch oberhalb
// der Main-Funktion!
int receiveUserInput();


int main()
{
    printIfEven(4);

    receiveUserInput();

    return EXIT_SUCCESS;
}


// Wir müssen immer den Datentyp angeben, da sonst eine implizite Deklaration zum Datentyp int vorgenommen wird
// und wir nicht immer mit diesem Datentyp arbeiten!

int receiveUserInput()
{
    int userInput;

    printf("Please enter an integer: ");
    scanf("%d", &userInput);
    printf("User input: %d\n", userInput);

    return userInput;
}

void printIfEven(int number)
{
    if((number % 2) == 0)
    {
        printf("%d\n", number);
    }
}

