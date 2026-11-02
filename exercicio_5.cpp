#include <iostream>
using namespace std;

int main () {

    //Solicitar dois valores inteiros, e mostrá-los na ordem crescente e decrescente.( prever para quando os valores forem iguais )

    int valor1 = 0;
    int valor2 = 0;

    cout << "Mostrar dois valores inteiros em ordem crescente e decrescente\n";
    cout << "Digite o primeiro valor\n";
    cin >> valor1;

    cout << "Digite o segundo valor\n";
    cin >> valor2;

    if(valor1 < valor2)
    {
        cout << "Os valores em ordem crescente ficam " << valor1 << " e " << valor2 << "\n";
        cout << "Os valores em ordem decrescente ficam " << valor2 << " e " << valor1 << "\n";
    }
    else if (valor1 > valor2)
    {
        cout << "Os valores em ordem crescente ficam " << valor2 << " e " << valor1 << "\n";
        cout << "Os valores em ordem decrescente ficam " << valor1 << " e " << valor2 << "\n";
    }
    else if (valor1 == valor2)
    {
        cout << "Os valores sao iguais, portanto ficam " << valor1 << " e " << valor2 << " igualmente\n";
    }
        
}
