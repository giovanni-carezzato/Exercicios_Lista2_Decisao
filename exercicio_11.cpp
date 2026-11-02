#include <iostream>
using namespace std;

int main () 
{

    //Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva.
    //A seguir: Se i=1 escrever os três valores a, b, c em ordem crescente.
    //Se i=2 escrever os três valores a, b, c em ordem decrescente.
    //Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois

    int i = 0;
    float a = 0;
    float b = 0;
    float c = 0;
    float aux = 0;

    cout << "Escolher um valor de 1 a 3 para i, e conforme a escolha de i os valores A, B e C irão se comportar de forma diferente\n";
    cout << "Digite o valor de i\n";
    cin >> i;

    if (i >= 1 && i <= 3)
    {
        cout << "Voce escolheu o numero " << i << " para i\n";
    }
    else
    {
        cout << "Valor invalido, digite um valor correto entre 1 a 3\n";
        cin >> i;
    }

    cout << "Escolha o valor de A, B e C. Fique a vontade!!!\n";

    cout << "Digite o valor de A\n";
    cin >> a;
    cout << "Digite o valor de B\n";
    cin >> b;
    cout << "Digite o valor de C\n";
    cin >> c;

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }

    cout << "Os valores escolhidos sao: " << a << "," << b << " e " << c << "\n";

    if (i == 1)
    {
        cout << "Como i eh e o mesmo que 1, o programa mostra em ordem crescente os valores A, B e C da seguinte maneira:\n[" << a << "] [" << b << "] [" << c << "]\n";
    }
    else if (i == 2)
    {
        cout << "Como i eh e o mesmo que 2, o programa mostra em ordem decrescente os valores A, B e C da seguinte maneira:\n[" << c << "] [" << b << "] [" << a << "]\n";
    }
    else if (i == 3)
    {
        cout << "Como i eh e o mesmo que 3, o programa mostra o maior numero ao meio entre os valores A, B e C da seguinte maneira:\n[" << a << "] [" << c << "] [" << b << "]\n";
    }

    cout << "Fim do programa, tente novamente outro valor de i!!!\n";
}