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



int zeilen = atol(argv[1]); // Initalisierung der Zeilenanzahl

for (int i = 0 ; i < zeilen+1; i+=1) { // Zeilenanzahl
printf ("\r"); // Sprung an den Anfang der aktuellen Bildschirmzeile
for (int l = zeilen-i; l > 0; l-=1){ //Leerzeichen einfügen nach Anzahl der Zeilen
printf (" ");
}
for (int s = 1; s < i*2; s+=1) { // Sterne einfügen nach Zeilenanzahl
printf ("*");
}
if ((i < zeilen) && (i > 0)){
printf (" \n");
}
}

return 0;