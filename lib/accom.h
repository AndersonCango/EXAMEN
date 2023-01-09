#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void permutacionCR(string aux,char *items,int n,int r)
{
    string resp=aux;
    if(r>0){
        for(int x=0; x<n; x++){
            permutacionCR(aux+items[x],items,n,r-1);
        }
    }else{
        cout<<"\n "<<resp;
    }
}


