#include <iostream>
using namespace std;

int main () {

    //Receber valores de base e altura de um triângulo e verificar se são valores válidos (positivos maiores que zero). 
    //Em caso afirmativo, calcular a área do triângulo.

    float base = 0;
    float altura = 0;
    float area = 0;

    cout << "Calcular a area do triangulo de acordo com a base e a altura\n";

    cout << "Digite o valor da base:\n";
    cin >> base;

    cout << "Digite o valor da altura:\n";
    cin >> altura;

    if (base > 0 && altura > 0)
    {
        area = (base * altura) / 2;
        cout << "A area do triangulo eh de: " << area << "cm quadrados" << "\n";
    }
    else 
    {
        cout << "Reinicie o programa e digite um valor positivo maior que 0 para a base e a altura:\n";
    }
    
}