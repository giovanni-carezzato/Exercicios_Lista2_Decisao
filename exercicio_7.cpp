#include <iostream>
using namespace std;

int main () {

    //Receber 3 valores numéricos em 3 variáveis, A, B e C.
    //Trocar os valores entre as variáveis de forma que, ao final do algoritmo, a variável A possua o menor valor e a variável C o maior.

    float a = 0;
    float b = 0;
    float c = 0;
    
    cout << "Receber valores e troca-los sendo C o maior valor no final\n";
    cout << "Digite o valor de A\n";
    cin >> a;

    cout << "Digite o valor de B\n";
    cin >> b;

    cout << "Digite o valor de C\n";
    cin >> c;

    if (a > b)
    {
        swap (a, b);        
    }
    if (a > c)
    {
        swap (a, c);
    }
    if (b > c)
    {
        swap (b, c);
    }

    cout << "\nValores finais ordenados:\n";
    cout << "A = " << a << "\n";
    cout << "B = " << b << "\n";
    cout << "C = " << c << "\n";

}