#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct emple
{
    char nombre [30];
    int ventas[3];
    double total,comis,tp;
};
emple empleados [5];
// procedimiento de ingreso nombre y las ventas de todos los empleados//
void IngresoEmpleado (emple empleados[])
{
    int i,k;
    for (i=0; i<5;i++)

    {
        cout<<"Nombre del empleado...:";
        cin.getline(empleados[i].nombre,30);
        for(k=0;k<3;k++)
        {
            cout<<"Ingresar la venta "<<k<<"....:";
            cin>>empleados[i].ventas[k];
        }
        _flushall ();
    }
//elaborar un procedimiento para calcular el total de las ventas, la cpmision que es el 5% del total de las ventas//
void Calcular (emple empleados[])
{
    int i,k;
    for (i=0; i<5;i++)
   {
    empleados [i].total=0;
    for(k=0;k<3;k++)
    {empleados[i].total+= empleados [i]. ventas[k];
    }
    empleados [i].comis=empleados[i].total*0.05;

    }

}
void presentar
{
    int i,k;
    for (i=0; i<5;i++)
   { cout<<"Empleados"<<empleados[i]. nombre<<"\n";
   for(k=0,k<3;k++)
    {cout<<"venta"<<k+1<<"..:"<<empleados[i].ventas[k]<<"\n";
    }
    cout<<"total ventas"<<empleados[i].total<<"\n";
    cout<<"Comision"<<empleados[i].comis<<"\n";
    cout<<"\n\n";
   }




}
int main()
{
    IngresoEmpleado(empleados);
    Calcular (empleados);
    presentar(empleados);
    return 0;
}
