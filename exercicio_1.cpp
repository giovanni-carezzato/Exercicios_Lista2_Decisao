#include <iostream>
using namespace std;

int main () {

    // Solicitar duas notas para o cálculo da média , mostrar a média e se a média for Maior ou igual a 6, mostrar “Aprovado”, caso contrário mostrar “Reprovado”

    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

    cout << "Mostrar media\n";
    cout << "Digite as duas notas para o calculo da media\n";
    cout << "Digite a primeira nota\n";
    cin >> nota1;
    cout << "Digite a segunda nota\n";
    cin >> nota2;
    
    media = (nota1 + nota2) / 2;

    if (media >= 6){
        cout << "A sua nota eh: " << media << "\nPortanto voce esta Aprovado";
    }
    else
    {
        cout << "A sua nota eh: " << media << "\nPortanto voce esta Reprovado";
    }
    
}