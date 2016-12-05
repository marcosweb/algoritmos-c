#include <iostream>
#include <string.h>

using namespace std;

class Pessoa{

    public:
        Pessoa(string nome){
            this->Nome = nome;
        };

        void setNome(string nome){
            this->Nome = nome;
        };

        string getNome(){
            return this->Nome;
        };

    private:
        string Nome;
        int idade;

};

int main(){

    Pessoa *aluno = new Pessoa("Marcos Aurelio");

    cout << aluno->getNome() << endl;

    aluno->setNome("Nayra Brenda");

    cout << aluno->getNome() << endl;

    delete aluno;

    return 0;
}
