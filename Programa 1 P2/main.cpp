#include <iostream>

using namespace std;
/*Ingresar 5 numeros a un arreglo usando un procedimiento luego obtener su promedio usando una funcion.
cuantos pares tiene el arreglo usando otra funcion presentar los resuktados en el main
si el residuo de la div entre dos es cero, el numero es par 5 % 2% el resultado es 1 */

int num[4];
double  prom;
int cpar;
void ingreso (int num [])
{       int i=0;
        for(i=0; i<5; i++)
        {
            cout<<"Ingresar Num["<<i<<"] ";
            cin>>num[i];
        }

}
double promedio (int num[])
{
    int i=0; double suma =0;
    for(i=0;i<5;i++)
    {
        suma= suma + num[i];
    }
    return suma/5;
}
int contarPar (int num[])
 {
    int i=0; int par=0;
    for(i=0;i<5;i++)
    { if (num[i]%2==0)
      {
          par++;
      }
    }
    return par;
 }

int main()
{
    ingreso (num);
    cpar=contarPar(num);
    prom= promedio (num);

    cout<<"promedio"<<prom<<"\n";
    cout<<"contador de par"<<cpar<<"\n";
    return 0;
}
