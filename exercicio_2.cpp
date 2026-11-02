#include <iostream>
#include <cmath>
using namespace std;

int main () {

    //Solicitar 3 valores inteiros para o cálculo da equação de segundo grau, delta = b² - 4.a.c
    //Se delta < 0 então não existem raízes reais
    //Se delta = 0 então existe uma raízes real
    //Se delta > 0 entao existem duas raízes reais
    //Raizes = -b +- raiz de delta sobre 2.a

    int delta = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int raiz1;
    int raiz2;

    cout << "Solicitar 3 valores inteiros e calcular delta\n";
    cout << "Digite o valor de A:\n";
    cin >> a;
    cout << "Digite o valor de B:\n";
    cin >> b;
    cout << "Digite o valor de C:\n";
    cin >> c;

    delta = (b*b) - (4 * a * c);
    cout << "Delta e igual a: " << delta << "\n";

    if (delta < 0)
    {
        cout << "Nao existem raizes reais\n";
    }
    else if (delta == 0)
    {
        cout << "Existe uma raiz real\n";
        raiz1 = -b / (2* a);
        cout << "A raiz eh: " << raiz1 << "\n";
    }
    else
    {
        cout << "Existem duas raizes reais\n";
        raiz1 = (-b + sqrt(delta)) / (2*a);
        raiz2 = (-b - sqrt(delta)) / (2*a);
        cout << "A primeira raiz eh: " << raiz1 << " e a segunda eh: " << raiz2;
    }
}