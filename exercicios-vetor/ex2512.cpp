/*

2.5. Exercicios Propostos
2.5.1. Variáveis compostas unidimensionais
2.5.1.2. Manipulação de string

Professor: Alenxandre Ribeiro
Aluno: Marcos Aurelio
Data: 05/12/2016

*/

#include <iostream> // cin, cout
#include <cstring>

using namespace std;

int main(){

    int  espacos = 0;
    int  letra_a = 0;
    int  letras;
    char frase[80] = "\0";
    char frase_tmp[80];


    cout << "\n\nDigite uma frase de até 80 caracteres: ";
    cin.getline(frase, 80);

    strcpy(frase_tmp, frase);

    cout << "\nFrase: " << frase << '.';

    // Contando espaços em branco
    for(int x = 0; frase[x] != '\0'; x++){
        if (frase[x] == ' ') {
            espacos++;
        }
        else if(frase[x] == 'a' || frase[x] == 'A'){
            letra_a++;
        }

        // Identificando pares de letras
        letras = 0;
        for(int y=x+1; frase_tmp[y] != '\0'; y++){
            if(frase_tmp[y] == frase[x] && frase[x] != ' '){
                letras++;
                frase_tmp[y] = ' ';
            }
        }
        if (letras > 1){
            letras = (letras - (letras % 2)) / 2;
            cout << "\nEncontrados " << letras << " par(es) da letra '" << frase[x] << "'.";
        }
    }

    cout << "\nEspaços em branco: " << espacos << '.' << endl << endl;

    return 0;
}
