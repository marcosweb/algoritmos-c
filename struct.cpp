#include <iostream>

using namespace std;

int main(){

    struct Pessoas {
        char nome[60];
        int idade;
    };

    Pessoas aluno;

    cout << "Digite o nome do Aluno:";
    cin >> aluno.nome;

    cout << "\n --- Bem-vindo, " << aluno.nome << " ---\n\n";

    return 0;
}
