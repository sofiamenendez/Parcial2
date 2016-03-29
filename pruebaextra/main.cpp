#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /*  Elaborar un arreglo de 5 numeros pares enteros
1 elaborar una funcion que genere un numero par entre 50-150
 2 elaborar un procedimiento donde se rellene el arreglo usando ls funvion que generea los
 numeros
 3. elaborar un procedimiento que me devuelva el numero mayory menor  principal llamar el ingreso, mayor y presentar
 presentar las variables del mayor y menor*/

using namespace std;

int maxi,mini;
int generarPar()
{

    int num=0;
    do
        {
        num=1 + rand() % (150-50);
    } while (!((num<=150) and (num%2==0)));
    return num;
}
void ingreso (int numero[])
{

    int i=0;
    for (i=0; i<5; i++)
    {
        numero [i]= generarPar();

    }
}

void presentar (int numero [])
{
    int i=0;
     for (i=0; i<5; i++)
     {
         cout<<"Numero["<<i<<"]="<<numero [i]<<"\n";
     }

}
int numero [5];

int mayor (int numero [])
{
    int i;
    int auxmayor=0;
    for(i=0;i<5;i++)
    {
        if (auxmayor<numero[i])
            auxmayor= numero[i];
    }
    return auxmayor;
}

int menor (int numero [])
{
    int i;
    int auxmenor=numero[0];
    for(i=0;i<5;i++)
    {
        if (auxmenor>numero[i])
            auxmenor= numero[i];
    }
    return auxmenor;
}

int main ()
{


ingreso(numero);
presentar(numero);
maxi=mayor(numero);
mini=menor(numero);
    cout<<"Numero mayor es"<<maxi<<"\n";
    cout<<"Numero menor es"<<mini<<"\n";
}
