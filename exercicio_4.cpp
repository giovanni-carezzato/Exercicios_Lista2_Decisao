#include <iostream>
using namespace std;

int main () {

    //Solicitar um valor inteiro positivo ( consistir ) e mostrar se esse número é par ou não par

    int valor = 0;

    cout << "Solicitar valor e identificar se e par ou impar\n";
    cout << "Digite um valor inteiro positivo\n";
    cin >> valor;
    if (valor <= 0)
    {
        cout << "Valor nao e positivo\n";
    }
    else
    {
        if (valor % 2 == 0)
        {
            cout << "O valor eh par " << "\n";
        }
        else
        {
            cout << "O valor eh impar " << "\n";
        }
    }


}