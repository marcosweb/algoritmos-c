#include <iostream>

using namespace std;

int main(){

    // Se desejar que outras funcoes acessem essa estrutura,
    // basta declarar fora do main(), assim ela será PÚBLICA em vez de PRIVADA
    struct Pessoas {
        char nome[60];
        int idade;
    };

    Pessoas aluno;
    Pessoas *ptr; // ponteiro

    // O ponteiro (ptr) precisa ter o mesmo tipo do dado que irá manipular
    ptr = &aluno;

    cout << "\nDigite seu primeiro nome: ";
    cin >> aluno.nome;

    cout << "\nDigite sua idade: ";
    cin >> ptr->idade;

    cout << "\n\n * * * Bem-vindo, " << ptr->nome << "! Você tem " << aluno.idade << " anos. * * * \n\n";

    return 0;
}
