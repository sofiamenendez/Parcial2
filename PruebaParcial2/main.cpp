#include <iostream>
#include <stdio.h>
#include <stdlib.h>

 /*Ingresar 5  numeros a un arreglo, usando unprocedimiento( pares y mayoes a 50)
 Elaborar una funcion donde encuentre el numero mayor del arreglo
 Elaborar una funcipn donde me calcule el promedio de los divisibles entre 5
 usando un procedimiento obtener el numero menor del arreglo
 en el programa principal llamar el procedimiento de ingreso, de obtener el numero mayor y asignar
 los valores devueltos por las funciones a variables, para que se presenten posteriormente.*/
using namespace std;
double  promedio;
int generarPar()
{

    int num=0;
    do
        {
        num=1 + rand() % (100-50);
    } while (!((num<=100) and (num%2==0)));
    return num;

}
void ingresarnumero (int num[])
{

    int i=0;
    for (i=0; i<5; i++)
    {
        num [i]= generarPar();

    }

}
double promedio (int num[])
{
    int c=0;
    double suma=0, prom;
    int i=0;
    for(i=0;i<5;i++)

    {   if (numero [i]%5==1);
       {suma+=numero[i];
         c++;
       }
    }
    if (c>0)
        prom=suma/c;
    return prom;
}
void Calcular (int numero)
{

}


int main()

{   ingresar(numero);
    return 0;
}
