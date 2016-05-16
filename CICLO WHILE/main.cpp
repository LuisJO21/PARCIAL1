#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//PRESENTAR LOS NUMEROS DEL 1 AL 10
int contador, numero, mayor, menor;
int suma, con50, sum50, prome50;

int main()
{   srand(time(0));
    contador=0;
    con50=0;
    suma=0;
    mayor=0;
    menor=100;
    while (contador<10)
    {
        numero=1 + rand() % (100-1);
        contador++;//contador=contador +1
        cout<<contador<<"..Numero..:"<<numero<<"\n";
       suma=suma + numero;//suma el valor de suma anterior con nuevo numero generado.
        if (mayor < numero)
            mayor=numero;

        if (menor > numero)
            menor=numero;

        if (numero>50)
           { con50++;
               sum50+= numero;

            prome50=sum50/con50;
           }

        }


    cout<<":....Numero Mayor.....:"<<mayor<<"\n";
    cout<<":....Numero Menor.....:"<<menor<<"\n";
    cout<<":...Numeros Mayores a 50..:"<<con50<<"\n";
    cout<<":...Suma Mayores a 50.....:"<<sum50<<"\n";
    cout<<":...Promedio Mayores a 50.:"<<prome50<<"\n";
    cout<<":.....Suma Total.......:"<<suma<<"\n";
    cout<<":..Final del Programa..:"<<"\n";
}
