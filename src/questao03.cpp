/*
Crie um algoritmo que leia um valor inteiro do teclado na vari�vel a e atribua esse valor a uma outra vari�vel,
b. Mostre na tela os valores das duas vari�veis.
*/
#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Insira um numero inteiro: ";
    cin >> a;
    cout << "Insira outro numero inteiro: ";
    cin >> b;
    cout << "Valor de 'A' Pre-atribuicao: " << a << endl;
    cout << "Valor de 'B': " << b << endl;
    a = b;
    cout << "Valor de 'A' Pos-atribuicao: " << a << endl;
    cout << "Valor de 'B': " << b << endl;

    return 0;
}
