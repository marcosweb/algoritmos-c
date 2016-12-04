#include <iostream>

using namespace std;

int main(){

    char nome;
    int idade;
    float salario;
    double nr_grande;
    long teste;

    // sizeof() exibe a quantidade de bytes ocupados na memória de acordo com o tipo de dado
    cout << "\n\n --- Tamanho das variáveis --- \n";
    cout << "\nnome (char)..........: " << sizeof(nome); // 1 byte
    cout << "\nidade (int)..........: " << sizeof(idade); // 4 bytes
    cout << "\nsalario (float)......: " << sizeof(salario); // 4 bytes
    cout << "\nnr_grande (double)...: " << sizeof(nr_grande); // 8 bytes
    cout << "\nteste (long).........: " << sizeof(teste); // 8 bytes

    // Aloca 3 espaços na memória para o ponteiro do tipo 'inteiro' (4 bytes cada)
    int *i_ptr = new (nothrow) int[3];

    // Preenche as variáveis
    // Mesmo elas não preenchidas ocupam os mesmos espaços, conforme o tipo de dado
    for (int x = 0; x<3; x++){
        i_ptr[x] = (x + 1) * (2 + x);
    }

    cout << "\n\n --- Exibindo numeros inteiros da i_ptr[] --- \n";

    // Exibe os dados preenchidos e o respectivo endereço de memória
    for (int x = 0; x<3; x++){
        cout << "\ni_ptr[" << x << "] (" << &i_ptr[x] << ") = " << i_ptr[x];
    }

    cout << endl << endl;

    return 0;
}
