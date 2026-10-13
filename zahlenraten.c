#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int randzahl_bereich = 100;
    int konstante = rand() % (randzahl_bereich + 1);
    int zahl = 0;
    int try = 0;
    printf("Zahl eingeben :");
    
    while (try < 10)
    {        
        scanf("%d", &zahl );

        if (zahl == -1)
        {
            printf("Die Geheime Zahl ist:%d\n", konstante);
        }

        else if (konstante == zahl)
        {
            printf("Richtig geraten\n");
            try = 10;
        }

        else if (konstante < zahl)
        {
            printf("Die Zahl ist kleiner\n");
            try++;
        }

        else if (konstante > zahl)
        {
            printf("Die Zahl ist groesser\n");
            try++;
        }
        
    }
    
    return 0;
    


}