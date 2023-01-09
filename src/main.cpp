// EPN
// Autor : Anderson Daniel Cango Samuisa
// Fecha : 09/01/2022
// Tema : Examen 1 Brimestre

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include "..\lib\accom.h"

using namespace std;

char acDni[11] = "1756084511";
char acFullname [100] = "Anderson Daniel Cango Samuisa";
char acEmail [50] = "anderson.cango@epn.edu.ec";
char acKey[5]= "1234";
int acenum = 1;

//METODO PARA LOGEARSE E INGRESAR - EL usuario principal es constante mientras que el segundo usuario se lo debe ingresar
void acLoginAnderson() 
{
	char ackey2[6] ="profe";
	char acDni1[20];
	char acEmail1[100];
	char acdesbloq1[30];
	char acdesbloq2[30];

	do{
		cout << "Ingrese el primer usuario : ";
		cin >> acEmail1;
		cin.clear();
	}while(!strcmp(acEmail1,acEmail)==0);

	do{
		cout << "Ingrese la clave del primer usuario : ";
		cin >> acDni1;
		cin.clear();
	}while(!strcmp(acDni1,acDni)==0);

	do{
		cout << "Ingrese el segundo usuario : ";
		cin >> acdesbloq1;
		cin.clear();
	}while(!strcmp(ackey2,acdesbloq1)==0);
	
	do{
		cout << "Ingrese la clave : ";
		cin >> acdesbloq2;
		cin.clear();;
	}while(!strcmp(acdesbloq2,acKey)==0);
}

//METODO PARA ACCEDER AL MENU
void acMenu()
{
	cout << endl << "---------------------BIENVENIDOS---------------------" << endl << endl;
	cout << "\t\t1 > Mostrar Usuario" << endl;
	cout << "\t\t2 > Barra de carga" << endl;
	cout << "\t\t3 > Combinatoria" << endl;
	cout << "\t\t0 > Salir" << endl;
	cin >> acenum;

	switch (acenum)
	{
	case 1: cout << endl << "\tCedula : " <<acDni << endl;
			cout << "\tCorreo electronico : " << acEmail << endl;
			cout << "\tNombre Completo : " << acFullname << endl;
		break;
	
	case 2: acenum;
		break;
	
	case 3: acenum;
		break;
	
	case 0: acenum;
		break;
	}
}

//METODO PARA VISUALIZAR LA BARRA DE CARGA
void acBarraCarga()
{
	char a = 177, b = 219;
    int n;
    char correo[100];
    int longitud = 0;
    int calculus; 

    cout << "Introduzca su correo institucional : ";
    cin.getline(correo,100,'\n');
    cout << "\n";
    longitud = strlen(correo);
    cout << "   > La cantidad de elementos de su correo es de : " << longitud << " elementos" << endl;

    cout << "\n";

    do{
    cout << "Introduzca el porcentaje hasta el que desee realizar la carga de la barra : ";
    cin >> n;
    }while(n>100);

    calculus = (n*longitud)/100;

    cout << "\n\n\t\t" "Cargando...\n\n" ;
    cout << "\t\t";
  
    for (int i = 0; i <= strlen(correo) ; i++)
        cout << (char)a;

    // Print initial loading bar
    for (int i = 0; i <= n; i++)
	{ 
        cout << "\r" << i << " %" << "\t\t";
            for (int f = 0; f <= calculus; f++)
            cout << (char)b;
        Sleep (10);
    }
    cout << "\n\n";
}

//METODO PARA REALIZAR LA COMBINATORIA
void acCombinatoria()
{
	char resultado[50]="";
	int i=0,j=0,r;
	int longitud1 = 0, longitud2 = 0;

	cout << endl << "Nombre : " << acFullname;
	while(acFullname[i]) 
    { 
        if(!strchr(resultado,acFullname[i])) 
            resultado[j++]=acFullname[i]; 
        i++; 
    } 
    resultado[j]='\0'; 
    cout << endl << "Conjunto sin repetidos : " << resultado << endl;
	longitud1 = strlen(acFullname);
	longitud2 = strlen(resultado);
	cout << "Longirud cadena : " << longitud1 << endl;
	cout << "Lomgitud conjunto : " << longitud2 << endl;

	cout << "Ingrese 3 si el ultimo digito de su cedula es par o 2 si es impar : " << endl;
	cin >> r;
	permutacionCR("",resultado,longitud2,r);

}

//LLAMADO A TODAS LAS FUNCIONES
int main()
{
	acLoginAnderson();
	acMenu();
	acCombinatoria();
	cout << endl;
	system("pause");
	return 0;
}