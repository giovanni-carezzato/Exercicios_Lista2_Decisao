#include <iostream>
using namespace std;

int main ()
{
    //Escrever um algoritmo que lê um valor em Reais (R$) e calcule qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto.
    //Escrever o valor lido e a relação de notas necessárias.

    int valor_reais = 0;
    int nota100 = 0;
    int nota50 = 0;
    int nota10 = 0;
    int nota5 = 0;
    int nota1 = 0;
    
    cout << "Mostrar o menor numero possivel de notas que o valor pode ser decomposto\n";
    cout << "Digite qualquer valor em R$:";
    cin >> valor_reais;

    cout << "O valor R$" << valor_reais << ", pode ser decomposto com as seguintes notas:\n";

    if(valor_reais >= 100)
    {
        nota100 = valor_reais / 100;
        valor_reais = valor_reais % 100;
    }
    if(valor_reais >= 50)
    {
        nota50 = valor_reais / 50;
        valor_reais = valor_reais % 50;
    }
    if(valor_reais >= 10)
    {
        nota10 = valor_reais / 10;
        valor_reais = valor_reais % 10;
    }
    if(valor_reais >= 5)
    {
        nota5 = valor_reais / 5;
        valor_reais = valor_reais % 5;
    }
    if(valor_reais >= 1)
    {
        nota1 = valor_reais / 1;
        valor_reais = valor_reais % 1;
    }
    else
    {
        cout << "O valor digitado e menor do que 1, como nao existem notas para esse valor o programa sera encerrado\n";
    }

    cout << nota100 << " notas de 100\n" << nota50 << " notas de 50\n" << nota10 << " notas de 10\n" << nota5 << " notas de 5\n" << nota1 << " notas de 1\n";


}
