#include <iostream>
#include <string.h>

using namespace std;

int main(){

    struct Pessoas {
        char Nome[60];
        int Idade;
    };

    Pessoas alunos;
    Pessoas * p; // ponteiro

    // Aloca (reserva) 3 espaços na memória
    p = new (nothrow) Pessoas[3];

    // se ponteiro foi criado (dferente de nulo), preenche as variáveis.
    if (p != nullptr){
        strcpy(p[0].Nome, "Marcos");
        p[0].Idade = 40;

        strcpy(p[1].Nome, "Nayra");
        p[1].Idade = 19;

        strcpy(p[2].Nome, "Henrique");
        p[2].Idade = 5;
    }
    else {
        cout << "\nErro ao criar ponteiro.\n";
        return 0;
    }

    for(int x=0; x<3;x++){
        cout << "\nOlá " << p[x].Nome << ", você tem " << p[x].Idade << " anos.";
    }

    // Desaloca espaços reservados da memória
    delete []p;

    cout << endl << endl;

    return 0;
}

