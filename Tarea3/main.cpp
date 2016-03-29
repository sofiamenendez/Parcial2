#include <iostream>

using namespace std;
int numero[5];
int contaP=0,contarI=0;
int contarM100=0;

void ingreso(int numero[])
{
    int i=0;
    for (i=0;i<5;i++)
   {
       cout<<"ingresar numeros..["<<i<<"]";
       cin>>numero[i];
   }

}


void contarParesImpares(int numero[], int &contaP,int &contarI)
{
    contarI=0;
    contaP=0;
    int i;
    for(i=0;i<5;i++)
    {
        if ((numero[i]% 2)==0)
        {
            contaP++;
        }
        else
        {
            contarI++;
        }
    }
}


int mayor100(int numero[])
{
    int i;
    int c=0;
    for(i=0;i<5;i++)
    {
        if((numero[i]>100))
            {
                c++;
            }

}
    return c;
}


int main()
{
    ingreso(numero);
    contarParesImpares(numero,contaP,contarI);
    contarM100=mayor100(numero);
    cout<<"Numero de pares.."<<contaP<<endl;
    cout<<"numero de impares.."<<contarI<<endl;
    cout<<"mayores a 100.."<<contarM100<<endl;
    return 0;
}
