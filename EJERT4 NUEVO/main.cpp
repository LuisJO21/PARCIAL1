#include <iostream>

using namespace std;

void presentar (int final)
{
    int k, i;
    for(i=1;i<=final;i++) //ciclo vaya de 1 a 5
    {
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
}

int main()
{
    int num;
    cout<<"Ingresar el Numero..:";
        cin>>num;
        presentar(num); //Este valor se pasa arriba en final.}

}
