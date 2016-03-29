#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
Crear un arreglo de 3x3, y guardar numeros aleatorios
entre 1-100, luego presentar el arreglo.
Dejar reservada la ultima linea para la suma de las columnas
*/

using namespace std;
const int lin=4;
const int col=3;

int num[lin][col];

void ingreso (int num[lin][col])  //en el caso de arreglos bib hay que rellanar el corchete con el numero asignado en este caso 3
{
    for(int l=0;l<lin-1;l++)
  {
     for(int c=0;c<col;c++)
     {
         num[l][c]= 50 + rand() % (100-50);; //parte en la que se colocan los numeros entre 1 y 100
     }
  }
}

void presentar (int num[lin][col])
{
    for(int l=0;l<lin;l++)
  {
     for(int c=0;c<col;c++)
     {
        cout<<num[l][c]<<"  ";
     }
     cout<<"\n";
  }
}


void sumarcolumnas (int num[lin][col])
{   int ul=lin-1;
    for(int c=0;c<col;c++)
  {
     for(int l=0;l<lin-1;l++)
     {
       num[ul][c] += num[l][c];
     }

  }
}

int main()
{
    ingreso(num);
    sumarcolumnas(num);
    presentar(num);



    return 0;
}
