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

//METODO // 1 MOSTRAR DATOS
void acMostrardatos()
{
    cout << endl << "Cedula : " << acDni << endl;
    cout << "Correo electronico : " << acEmail << endl;
    cout << "Nombre completo : " << acFullname << endl;
}

//METODO // 2 PARA VISUALIZAR LA BARRA DE CARGA 
void acBarraCarga()
{
	char a = 177, b = 219;
    int n;
    int longitudBP = 0;
    int calculus; 

    longitudBP = strlen(acEmail);
    cout << endl << endl << "   > La cantidad de elementos de su correo es de : " << longitudBP << " elementos" << endl;

    cout << "\n";

    do{
    cout << "Introduzca el porcentaje hasta el que desee realizar la carga de la barra : ";
    cin >> n;
    }while(n>100);

    calculus = (n*longitudBP)/100;

    cout << "\n\n\t\t" "Cargando...\n\n" ;
    cout << "\t\t";
  
    for (int i = 0; i <= strlen(acEmail) ; i++)
        cout << (char)a;

    // Print initial loading bar
    for (int i = 0; i <= n; i++)
	{ 
        cout << "\r" << i << " %" << "\t\t";
            for (int f = 0; f <= calculus; f++)
            cout << (char)b;
        Sleep (100);
    }
    cout << "\n\n";
}

//METODO // 3 PARA REALIZAR LA COMBINATORIA
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

	cout << endl << "---------------------BIENVENIDOS---------------------" << endl << endl;
	cout << "\t\t1 > Mostrar Usuario" << endl;
	cout << "\t\t2 > Barra de carga" << endl;
	cout << "\t\t3 > Combinatoria" << endl;
	cout << "\t\t0 > Salir" << endl;
	cin >> acenum;

	if(acenum==1){
        acMostrardatos();
    }
    if(acenum==2){
        acBarraCarga();
    }
    if(acenum==3){
        acCombinatoria();
    }
    exit(0);
  
    cout << endl << endl;
    system ("pause");
	return 0;
}