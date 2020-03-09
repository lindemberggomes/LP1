#include <iostream>    // cin, cout, endl
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
// Função principal 
using namespace std;
int main() {

// Declaração de variáveis 

int num1;  //primeiro número a ser lido 
int num2;   // sugundo número a ser lido 
int soma;  // soma de num1 e num2

//escreve mensagem para solicitar o primeiro número 
std::cout << "Entre o primeiro número:";

// Faz leitura do primeiro númro 
 std::cin >> num1;

 // Escreve mensagem para solicitar o segundo número
 std::cout <<"Entre o segundo número:";

// Faz a leitura do segundo número
std::cin >> num2;

// adciona os dois números 
soma = num1 + num2;

//Escreve a soma dos dois números 
std::cout <<"A soma é:" << soma << std::endl;

//Termine e indique que o programa finalizou com sucesso.
return 0;

// Fim da função principal.
}
