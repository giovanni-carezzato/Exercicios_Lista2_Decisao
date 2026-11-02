#include <iostream>
using namespace std;

int main () {

    //Receber 3 valores numéricos, X, Y e Z, e verificar se esses valores podem corresponder aos lados de um triângulo.
    //Em caso afirmativo, informar ao usuário se o triângulo é equilátero, isósceles ou escaleno.

    int x = 0;
    int y = 0;
    int z = 0;

    cout << "Mostrar o tipo de triangulo de acordo com os valores X, Y e Z\n";
    cout << "Digite o valor de X:\n";
    cin >> x;
    cout << "Digite o valor de Y:\n";
    cin >> y;
    cout << "Digite o valor de Z:\n";
    cin >> z;
    
    if ((x + y > z) && (x + z > y) && (y + z > x))
    {
        cout << "Como a soma de dois lados sao maiores ou iguais a um terceiro lado, este eh um triangulo\n";
        if (x == y && y ==z)
        {
            cout << "Este eh um triangulo equilatero pois possui todos os lados iguais\n";
        }
        else if ((x != y) && (x != z) && (y != z))
        {
            cout << "Este eh um triangulo escaleno pois possui todos os lados diferentes\n";
        }
        else
        {
            cout << "Este eh um triangulo isosceles pois possui dois lados iguais\n";
        }
    }
    else
    {
        cout << "Nao eh um triangulo, pois a soma dos dois lados e menor que o terceiro lado\n";
        cout << "Digite outros valores\n";
    }
 
}