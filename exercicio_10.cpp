#include <iostream>
using namespace std;

int main () {

    //Credito especial em função do saldo médio.
    //Ler o saldo medio do cliente, calcular o valor do credito em função da tabela a seguir:

    //      SALDO MÉDIO                                           % CREDITO
    //      0 a 200                                                   0%
    //      201 a 400                                                20%
    //      401 a 600                                                30%
    //      Acima de 601                                             40%
    
    //Mostrar como saída uma mensagem informando o saldo médio e o valor do crédito.

    float saldo = 0;
    float credito = 0;

    cout << "Informar saldo medio e valor do credito\n";
    cout << "Digite o seu saldo medio:\n";
    cin >> saldo;

    if(saldo >= 0 && saldo <=200)
    {
        credito = saldo * 0.0;
        cout << "Seu credito eh de R$" << credito << "\n";
    }
    else if(saldo >= 201 && saldo <= 400)
    {   
        credito = saldo * 0.2;
        cout << "Seu credito eh de R$" << credito << "\n";
    }
    else if (saldo >= 401 && saldo <= 600)
    {
        credito = saldo * 0.3;
        cout << "Seu credito eh de R$" << credito << "\n";
    }
    else if(saldo >= 601)
    {
        credito = saldo * 0.4;
        cout << "Seu credito eh de R$" << credito << "\n";
    }
    else 
    {
        cout << "O seu numero eh negativo, operacao cancelada.\n";
    }
}