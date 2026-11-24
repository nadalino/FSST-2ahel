#include <stdio.h>
#include <stdlib.h>


int strlen(char *wort){
    int sz;
    for (; wort[sz] != '\0'; sz++)
    {
        return sz;
    }
}

void dump(char *wort){ // unterschrift der eltern

    for (int i = 0; wort[i] != '\0'; i++)
    {
        printf("%c ", wort[i]);
        printf("\n");
    }
}

char* init(int sz, char c){
    char* wort = malloc(sz);
    for (int i = 0; i < sz; i++)
    {
        wort[i] = c;
    }
    wort[sz] = '\0';
    return wort;  
}


int main(){
    char *wort = "WORT" ;
    char *wort2 = init(strlen(wort), '?');

    dump(wort2);
    free(wort2);

    return 0;
}