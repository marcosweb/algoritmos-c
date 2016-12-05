#include <iostream>
#include "classes/conta_bancaria.h"

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    Conta conta;

    conta.depositar(1500);

    cout << "\nSaldo da conta: " << conta.saldo() << endl;

    conta.depositar(500);

    cout << "\nSaldo da conta: " << conta.saldo() << endl;

    conta.sacar(1200);


    cout << "\nSaldo da conta: " << conta.saldo() << endl;

    conta.sacar(1000);

    if (conta.mostrar_erro() > 0){
        cout << "\nHouve um erro na sua solicitação. Saldo insuficiente.\n";
    }

    cout << "\nSaldo da conta: " << conta.saldo() << endl << endl;


    return 0;
}

