#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
Para receber parâmetros, a função main() adquire
a forma abaixo, onde:

argc: valor que indica o número de parâmetros
com os quais a função main() foi chamada. (argc >=1)

argv: ponteiro para um vetor contendo "argc" strings.
Cada string éum dos parâmetros para a main().

argv[0] sempre aponta para o nome do programa.
*/
int main(int argc, char *argv[]){

    if (argc == 1){
        printf("Programa %s sem parametros\n", argv[0]);
    }
    else {
        int i;
        printf("Parametros do programa %s\n", argv[0]);
        for (i=1; i<argc; i++){
            printf("Parametro %d: %s\n", i, argv[i]);
        }
    }

    return 0;
}


