#include <iostream>
#include <string.h>

using namespace std;

void preenche_dados();
void exibe_dados();
void exibe_dados_reverso();

// Cria estrutura contendo 2 ponteiros
// que serao utilizados para navegacao entre os itens

struct Alunos {
    int Idade;
    Alunos *Proximo;
    Alunos *Anterior;
};

// Armazena o endereço de memória do primeiro item da lista
Alunos *lista_inicio = NULL;

// Armazena o endereço de memória do último item da lista
Alunos *lista_fim = NULL;

// Armazena o endereço de memória do item que está sendo preenchido no momento
// para ser utilizado posteriormente como 'anterior' no próximo item a ser preenchido
Alunos *item_anterior = NULL;

// A lista contendo os dados digitados pelo usuário, onde cada item da lista
// será armazenado em um endereço de memória específico e aleatório
Alunos *lista;


int main(){

    setlocale(LC_ALL, "Portuguese");

    preenche_dados();
    exibe_dados();
    exibe_dados_reverso();

    cout << endl << endl;

    return 0;
}

void preenche_dados(){
    int num;
    cout << "\n\nDigite uma idade (0 p/ sair): ";
    cin >> num;
    while (num != 0){
        lista = new Alunos;
        lista->Idade = num;
        lista->Proximo = NULL;

        // Não existe item anterior. Este é o primeiro item
        if (item_anterior == NULL){
            lista->Anterior = NULL;
            lista_inicio = lista;
        }
        // A partir do segundo item, já teremos um anterior
        else
        {
            // Registra o endereço de memória do item anterior a este,
            // pois já temos o endereço do primeiro item
            lista->Anterior = item_anterior;

            // Registra no item anterior (no seu elemento 'Proximo') o endereco do item atual,
            // Pois este é o próximo do anterior, certo?
            item_anterior->Proximo = lista;
        }

        // Atualiza o item anterior com o endereço do item atual, para ser usado no próximo item
        item_anterior = lista;
        cout << "\n\nDigite uma idade (0 p/ sair): ";
        cin >> num;
    }

    // Registra o endereço (de memória) do último item da lista
    lista_fim = lista;
}

void exibe_dados(){
    cout << "\n\nListando as Idades \n\n";
    lista = lista_inicio;
    while(lista != NULL){
        cout << "\nIdade: " << lista->Idade;
        lista = lista->Proximo;
    }
    cout << "\n\n";
}

void exibe_dados_reverso(){
    cout << "\n\nListando as Idades \n\n";
    lista = lista_fim;
    while(lista != NULL){
        cout << "\nIdade: " << lista->Idade;
        lista = lista->Anterior;
    }
    cout << "\n\n";
}
