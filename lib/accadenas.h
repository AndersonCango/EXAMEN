#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

void lonstr()
{
    char cadena[100];
    int longitud = 0;

    cout << "Introduzca una frase : ";
    cin.getline(cadena,100,'\n');
    longitud = strlen(cadena);
    cout << "El numero de elementos de la cadena es : " << longitud;
}

void repwords()
{
    char resultado[50]=""; 
    char palabra[100];
    int i=0,j=0,r; 
    cout << "Ingresa una palabra : ";
    cin.getline(palabra,100,'\n');
    while(palabra[i]) 
    { 
        if(!strchr(resultado,palabra[i])) 
            resultado[j++]=palabra[i]; 
        i++; 
    } 
    resultado[j]='\0'; 
    cout << endl << "La palabra quedara de la siguiente manera : " << resultado << endl;
}