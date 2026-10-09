#include <stdio.h>


int main()
{
    int zahl = 0;
    int konst = 50;
    
    printf("Zahl eingeben :");
    scanf( "%d", &zahl );
    

    if (zahl > konst)
    {
        printf("Zahl ist groesser als die Konsatante");
    }  
    if (zahl < konst)
    {
        printf("Zahl ist kleiner als die konstante");
    }
    if (zahl == konst)
    {
        printf("Zahl ist gelich groes wie die konstante");
    }
    
    


        return 0;
}