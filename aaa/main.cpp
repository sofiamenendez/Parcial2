#include <iostream>

using namespace std;
int numero[5];
double  promedio;

void ingresarnumero (int numero [])
{       int i=0;
        for(i=0; i<5; i++)
        {
            cout<<"Ingresar Num["<<i<<"] ";
            cin>>numero[i];
        }

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
