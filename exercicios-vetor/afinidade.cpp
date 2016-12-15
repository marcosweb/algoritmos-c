/*

2.5. Exercicios Propostos

Calcular nivel de afinidade entre mocas e rapazes

Professor: Alenxandre Ribeiro
Aluno: Marcos Aurelio
Data: 15/12/2016

*/
#include <iostream>

using namespace std;

int main(){

    int rapazes;        // numero de rapazes (informado pelo usuario)
    int mocas;          // numero de moças (informado pelo usuario)
    int num_perg = 3;   // numero de perguntas
    int x, y, z, af;

    cout << "\nDigite o nr de rapazes: ";
    cin >> rapazes;

    cout << "\nDigite o nr de moças: ";
    cin >> mocas;

    int afin[rapazes][mocas]; // matriz de afinidades

    char m[mocas][num_perg], r[rapazes][num_perg]; // matriz de respostas

    cout << "\n\nPerguntas para os rapazes:\n\n";

    for(x=0; x<rapazes; x++){
        for(y=0; y<num_perg; y++){
            cout << " > " << "rapaz[" << x << "] 'pergunta " << y+1 << "': ";
            cin >> r[x][y];
        }
        cout << "--------------------------------\n";
    }

    cout << "\nPerguntas para as mocas:\n\n";

    for(x=0; x<mocas; x++){
        for(y=0; y<num_perg; y++){
            cout << " > " << "moca[" << x << "] 'pergunta " << y+1 << "': ";
            cin >> m[x][y];
        }
        cout << "--------------------------------\n";
    }

    cout << "\n\n    ";

    // percorre os rapazes
    for(x=0; x<rapazes; x++){
        cout << x << " | ";

        // posiciona em um rapaz e percorre todas as mocas
        for(y=0; y<mocas; y++){

            af = 0; // afinidade

            // verifica as respostas da moca (y)
            // e compara com as resposta do rapaz atual (x)
            for(z=0; z<num_perg; z++){

                // se as respostas forem iguais ou indiferente...
                if (m[y][z] == r[x][z] || m[y][z] == 'i'){
                    af++; // ...incrementa afinidade
                }
            }
            afin[x][y] = af;
        }
    }

    cout << "\n";

    for(x=0; x<rapazes; x++){
        cout << "\n" << x << "   ";
        for(y=0; y<mocas; y++){
            cout << afin[x][y] << " | ";
        }
    }

    cout << "\n\n";

    return 0;
}
