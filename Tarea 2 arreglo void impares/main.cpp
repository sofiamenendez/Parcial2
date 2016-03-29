#include <iostream>

using namespace std;
/* Ingresar 5 numeros a un arreglo usando un void.
luego elaborar una funcion para devolver el promedio de los numeros impares del arreglo
una funcion para determinar cuantos numeros estan entre 50-100.

2 elaborar un procedimiento para ingresar 5 numeros enteros comprendidos entre 1-10a un arreglo. elaborar
una funcion para obtener el factorial de un numero.
luego calcular el facotriral de cada uno de los numeros del arreglo y presentarlo,
se debera de llamar la funcion del factorial para hacer el calculo por cada numero del arreglo
usar un void para realizar este procedimiento. */




int numero[4];
double  promedioI;
int contarnum;
void ingreso (int numero [])
{       int i=0;
        for(i=0; i<5; i++)
        {
            cout<<"Ingresar Num["<<i<<"] ";
            cin>>numero[i];
        }

}
double promedio (int numero[])
{
    int c=0;
    double suma=0, prom;
    int i=0;
    for(i=0;i<5;i++)

    {   if (numero [i]%2==1);
       {suma+=numero[i];
         c++;
       }
    }
    if (c>0)
        prom=suma/c;
    return prom;
}
int contar50_100 (int numero[])
 {
    int c=0, i=0;
    for(i=0;i<5;i++)
    { if ((numero[i]>=50) and (numero[i]<=100))
     c++;

      }
      return c;
    }



int main()
{
    ingreso (numero);
    promedioI=promedio(numero);
    contarnum= contar50_100(numero);

    cout<<"promedio de impares"<<promedioI<<"\n";
    cout<<"contador de impar"<<contarnum<<"\n";
    return 0;
}
