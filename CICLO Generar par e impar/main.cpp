#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int numero, par, impar, contador;

int main()
{
    srand(time(0));
    contador=0;
    par=0;
    impar=0;
    while (contador<10)
    {
        numero=1 + rand() % (100-1);
        contador++;//contador=contador +1
        cout<<contador<<"..Numero..:"<<numero<<"\n";
    if ((numero%2)==0){
        par++;
    }
        else {
        impar++;
        }
    }

    cout<<"Numeros Pares..:"<<par<<"\n";
    cout<<"Numeros Impares..:"<<impar<<"\n";
    cout<<"Final del Programa..:"<<"\n";

    }



