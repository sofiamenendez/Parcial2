#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //libreria para las cadenas de texto


using namespace std;
struct alumno
{

    char nombre [30];
    int p1,p2,p3,promedio;
    char obs[15];
};
alumno alum[5];
void ingresoArreglo (alumno alum[])
{
    int i;
    for(i=0;i<5;i++)
    {
        ingreso(alum[i]);
    }
}

void ingreso (alumno &alum)
{
cout<<"Nombre del Alumno ";
  cin.getline(alum.nombre,30);
  cout<<"Parcial 1....";
  cin>>alum.p1;
  cout<<"Parcial 2....";
  cin>>alum.p2;
  cout<<"Parcial 3....";
  cin>>alum.p3;
  _flushall();
}


void calcular (alumno &alum)
{
    alum.promedio= (alum.p1+alum.p2+alum.p3)/3;
    if (alum.promedio>=60)
    {
        strcpy(alum.obs,"Aprobado");
    }
    else
    {
        strcpy(alum.obs,"Reprobado");
    }
}

void calcularArreglo (alumno &alumn)
{
    int i;
    for(i=0;i<5;i++)
    {
        calcular(alum[i]);
    }
}
void presentar (alumno alum)
{
   int i;
    for(i=0;i<5;i++)
    {
        presentar(alum[i]);
    }
}
void presentarArreglo (alumno alum)
{
    cout<<"Alumno  "<<alum.nombre<<"Nota :"<<alum.promedio<<"obs :"<<alum.obs<<"\n";
}

int main()
{
    ingresoArreglo(alum);
    calcularArreglo(alum);
    presentarArreglo(alum);
    return 0;
}
