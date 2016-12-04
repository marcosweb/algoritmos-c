#include <iostream>
#include <math.h>

using namespace std;

int soma(int x, int y);
int impar(int n);
int quadrado(int n);
int raizQuadrada(int n);
float percentual(float taxa, float valor);

int main(){
    int n;

    cout << "digite um numero: ";
    cin >> n;

    if (impar(n)) {
        cout << "O número " << n << " é impar." << endl;
    }
    else {
        cout << "O número " << n << " é par." << endl;
    }

    cout << "O quadrado de " << n << " é " << quadrado(n) << endl;
    cout << "A raiz quadrada de " << n << " é " << raizQuadrada(n) << endl;
    cout << n << "% de 1000 = " << percentual((float) n, 1000) << endl;

    return 0;
}


/* FUNÇÕES */

int soma (int x, int y){
    return x + y;
}

int impar(int n){
    return n%2 != 0;
}

int quadrado(int n){
    return pow(n, 2);
}

int raizQuadrada(int n){
    return sqrt(n);
}

float percentual(float taxa, float valor){
    return (taxa * valor / 100);
}
