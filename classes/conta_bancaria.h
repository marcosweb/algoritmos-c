/**
 * Class Conta
 * @author Marcos Aurelio <contato@marcosweb.com.br>
 * @version 1.0.1
 * @link https://github.com/marcosweb/algoritmos-cpp
 *
 */
class Conta {

    public:

        void depositar(float valor);
        bool sacar(float valor);
        float saldo();
        int mostrar_erro();
        Conta();

    private:
        float quantia;
        int err;
        void adicionar_erro(int err);
};


Conta::Conta(){
    this->quantia = 0;
    this->err = 0;
}


void Conta::depositar(float valor){
    if (valor > 0){
        this->quantia = this->quantia + valor;
    }
}


bool Conta::sacar(float valor){
    if (valor > this->quantia){
        this->adicionar_erro(1);
        return false;
    }
    this->quantia = this->quantia - valor;
    return true;
}


float Conta::saldo(){
    return this->quantia;
}


void Conta::adicionar_erro(int err){
    this->err = err;
}


int Conta::mostrar_erro(){
    int err;
    err = this->err;
    this->err = 0;
    return err;
}

