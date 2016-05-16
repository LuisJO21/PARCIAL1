#include <iostream>

using namespace std;
// Ing num de hasta 4 cifras pero puede ingresar uno mayor.
//el programa debera de escribir cuantas cifras tiene el numero.
int num;
int main()
{
    cout << "Ingrese el Numero...:";
    cin>>num;

    if (num<0)
         num*= (-1);

    if (num<=9)
        cout<<"Tiene una Cifra   ";
    else if (num<=99)
        cout<<"Tiene dos Cifras   ";
    else if (num<=999)
        cout<<"Tiene tres Cifras   ";
        else
            cout<<"Tiene Cuatro o Mas de Cuatro Cifras   ";


}
