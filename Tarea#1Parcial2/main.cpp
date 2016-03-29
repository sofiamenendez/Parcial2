#include <iostream>

using namespace std;

void leerDatos(int numeros[], int SIZE)
{
    for(int i = 0; i < SIZE; i++)
        cout << numeros[i] << endl;
}

int main()
{
    int SIZE = 10;
    int numeros[SIZE];

    for(int i = 0; i < SIZE; i++)
        numeros[i] = i;

    leerDatos(numeros, SIZE);
    return 0;
}
