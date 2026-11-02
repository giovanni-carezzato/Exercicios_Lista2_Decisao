#include <iostream>
using namespace std;

int main () {

    //Dado um número inteiro de segundos, mostrar a quantas horas, minutos e segundos ele corresponde.

    int segundos = 0;
    int minutos = 0;
    int horas = 0;
    
    cout << "Converter segundos em horas, minutos e segundos\n";
    cout << "Digite um valor em segundos:\n";
    cin >> segundos;
    cout << "Dentro de " << segundos << " segundos temos:\n";
    if (segundos >= 0)
    {
        if (segundos >= 60)
        {
            minutos = segundos / 60;
            segundos = segundos % 60;
        }
        if (minutos >= 60)
        {
            horas = minutos / 60;
            minutos = minutos % 60;
        }
        cout << horas << " horas " << minutos << " minutos e " << segundos << " segundos\n";    
    }
    else
    {
        cout << "Valor invalido, digite um numero positivo\n";
    }
   
}