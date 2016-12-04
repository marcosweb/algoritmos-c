#include <iostream>

using namespace std;

int main(){

    int ano = 2016, *ponteiro;

    // Ponteiro aponta para o endereço de memória da variável 'ano'
    ponteiro = &ano;

    cout << endl;

    // Endereço de memória da variavel 'ano'
    cout << "\nEndereço de 'ano'...............: " << &ano;

    // Endereço de memória da variavel 'ano'
    cout << "\nConteudo de 'ano'...............: " << ano; // 2016

    // Exibe o conteúdo do ponteiro (endereço da variável 'ano')
    cout << "\nConteudo do ponteiro............: " << ponteiro; // 2016

    // * Exibe o conteúdo (2016) do endereço apontado (endereço de 'ano')
    cout << "\nConteúdo do endereço apontado...: " << *ponteiro;

    // Exibe o endereço de memória onde o ponteiro está armazenado
    cout << "\nEndereço do ponteiro............: " << &ponteiro;

    // modificado o conteúdo de 'ano' via ponteiro
    // Equivale a ano = ano + 1
    *ponteiro = *ponteiro + 1;

    // * O valor da variável 'ano' foi modificada diretamente no endereço de memória, via ponteiro
    cout << "\nConteúdo de 'ano' incrementado..: " << ano;

    cout << endl;

    return 0;
}
