#include <iostream>
using namespace std;

int main () {
    
    //Solicitar dois valores inteiros, e mostrá-los na ordem crescente e decrescente.

    int valor1 = 0;
    int valor2 = 0;

    cout << "Mostrar dois valores em ordem crescente e decrescente\n";
    cout << "Digite o primeiro valor:\n";
    cin >> valor1;
    cout << "Digite o segundo valor:\n";
    cin >> valor2;

    if (valor1 < valor2)
    {
        cout << "Os valores em ordem crescente sao: " << valor1 << " e " << valor2 << "\n";
        cout << "E os valores em ordem decrescente sao: " << valor2 << " e " << valor1 << "\n";
    }
    else
    {
        cout << "Os valores em ordem crescente sao: " << valor2 << " e " << valor1 << "\n";
        cout << "E os valores em ordem decrescente sao: " << valor1 << " e " << valor2 << "\n";
    }
   

}