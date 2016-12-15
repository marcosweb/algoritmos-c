/*

2.5. Exercicios Propostos
2.5.2. Variáveis compostas unidimensionais
2.5.2.7. Cálculos com matrizes

Professor: Alenxandre Ribeiro
Aluno: Marcos Aurelio
Data: 09/12/2016

Exercício feito no laboratório

*/
#include <iostream>

using namespace std;

int main(){
    
    int x = 0, y = 0, lin, col;
    
    cout << "\nDigite o numero de linhas da Matriz: ";
    cin >> lin;
    
    cout << "\nDigite o numero de colunas da Matriz: ";
    cin >> col;
    
    double mat[lin][col+1];
    
    for(x=0; x<lin; x++){
        mat[x][col] = 1;
        for(y=0; y<col; y++){
            cout << "\nPreencha [" << x << "," << y << "]: ";
            cin >> mat[x][y];
            mat[x][col] *= mat[x][y];
        }        
    }
    
    cout << "\n\nMatriz B:\n\n";
    col += 1;
    
    for(x=0; x<lin; x++){
        for(y=0; y<col; y++){
            cout << "[ " << mat[x][y] << " ] ";
        }
        cout << "\n";
    }
    
    cout << "\n\n";
    
    return 0;
}