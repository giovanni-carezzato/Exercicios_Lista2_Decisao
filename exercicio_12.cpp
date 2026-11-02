#include <iostream>
using namespace std;

int main () 
{

    //Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente.
    //O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo:

    //Código do produto                                                             Preço unitário
    //      1                                                                         R$ 32,00
    //      2                                                                         R$ 45,00                                  
    //      3                                                                         R$ 37,00
    //      4                                                                         R$ 33,00


    float codigo_do_produto = 0;
    float preco = 0;
    float quantidade = 0;
    float valor_final = 0;

    cout << "Calcular o valor devido do cliente\n";
    cout << "Digite o codigo do produto\n";
    cin >> codigo_do_produto;

    if(codigo_do_produto == 1)
    {
        preco = 32.00;       
    }
    else if(codigo_do_produto == 2)
    {   
        preco = 45.00;
    }
    else if(codigo_do_produto == 3)
    {   
        preco = 37.00;
    }
    else if(codigo_do_produto == 4)
    {   
        preco = 33.00;
    }
    else
    {
        cout << "Codigo errado, operacao cancelada.\n";     
    }

    cout << "Digite a quantidade que foi comprada deste produto\n";
    cin >> quantidade;

    valor_final = preco * quantidade;
    cout << "O valor total a ser pago em cima desse produto eh de: R$" << valor_final << "\n";
    
}