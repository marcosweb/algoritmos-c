#include <iostream>

using namespace std;

int main(){

    int aux, x, i, vet[10] = {5,2,1,8,3,4,6,9,7};

    for (i=0; vet[i] != '\0'; i++){
        for (x=i+1;vet[x] != '\0'; x++){
            if (vet[x] < vet[i]){
                aux = vet[i];
                vet[i] = vet[x];
                vet[x] = aux;
            }
        }
    }

    x = 0;

    while (vet[x]!='\0'){
        cout << vet[x++] << endl;
    }

    return 0;
}
