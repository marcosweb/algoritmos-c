/*

2.5. Exercicios Propostos
2.5.1. Variáveis compostas unidimensionais
2.5.1.10. Intercalação de vatores

Professor: Alenxandre Ribeiro
Aluno: Marcos Aurelio
Data: 05/12/2016

*/

#include <iostream>

using namespace std;

int main(){

    int na, nb, y, x, aux;

    cout << "\n\n --> Digite o numero de elementos do vetor A: ";
    cin >> na;

    cout << "\n\n --> Digite o numero de elementos do vetor B: ";
    cin >> nb;

    int tam_c = na+nb;
    int inc_c = 0;
    int a[na];
    int b[nb];
    int c[tam_c];

    // Recebe valores do vetor A e ja guarda em C
    for(x = 0; x<na; x++){
        cout << "\n - Digite um número para o " << x+1 << "° item de A: ";
        cin >> a[x];
        c[x] = a[x];
    }

    y = x;

    // Recebe valores do vetor B e continua a guardar em C
    for(x = 0; x<nb; x++){
        cout << "\n - Digite um número para o " << x+1 << "° item de B: ";
        cin >> b[x];
        c[y++] = b[x];
    }

    // Ordena vetor C
    for (y=0; y<tam_c; y++){
        for (x=y+1;x<tam_c; x++){
            if (c[x] < c[y]){
                aux = c[y];
                c[y] = c[x];
                c[x] = aux;
            }
        }
    }

    // Exibe conteudo jah ordenado, do vetor C
    cout << "\n\nVetor 'C': ";
    for(x=0; x<tam_c; x++){
        cout << '[' << c[x] << ']';
    }

    cout << endl << endl;

    return 0;
}
