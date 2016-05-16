#include <iostream>
#include <stdlib.h>
using namespace std;

int num, d;
int main()
{
    cout << "Ingrese un Numero....:";
    cin>>num;

    if ((num%5)==0)
    {
    cout<<"Es Divisible entre 5"<<"\n";
    }
    else
    {
    cout<<"No es Divisible entre 5";
    }

    return 0;
}
