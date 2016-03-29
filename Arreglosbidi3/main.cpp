#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
Crear un arreglo de 3x3, y guardar numeros aleatorios
entre 1-100, luego presentar el arreglo.
*/

using namespace std;
const int lin=3;
const int col=3;

int num[lin][col];

void ingreso (int num[lin][col])  //en el caso de arreglos bib hay que rellanar el corchete con el numero asignado en este caso 3
{
    for(int l=0;l<lin;l++)
  {
     for(int c=0;c<col;c++)
     {
         num[l][c]= 1 + rand() % (100-1);; //parte en la que se colocan los numeros entre 1 y 100
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

int main()
{
    ingreso(num);
    presentar(num);

    return 0;
}
