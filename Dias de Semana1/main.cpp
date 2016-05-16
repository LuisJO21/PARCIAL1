#include <iostream>
#include <stdlib.h>
using namespace std;
int idn;

int main()
{
    cout << "Ingrese un Número de 1 a 7...:";
    cin >>idn;

    if (idn==1) {
    cout << "Dia Lunes";
    }
    if (idn==2) {
    cout << "Dia Martes";
    }
    if (idn==3) {
    cout << "Dia Miercoles";
    }
    if (idn==4) {
    cout << "Dia Jueves";
    }
    if (idn==5) {
    cout << "Dia Viernes";
    }
    if (idn==6) {
    cout << "Dia Sabado";
    }
    if (idn==7) {
    cout << "Dia Domingo";
    }
   cout<<"\n";
   system("PAUSE");
    return 0;
}
