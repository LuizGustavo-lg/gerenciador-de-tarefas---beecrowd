#include <iostream>
using namespace std;

struct Dados{
    int id;
    string descricao;    
};


struct No{
    Dados dados;
    No* anterior;
    No* proximo;
};


class ListaEncadeada{
private:
    No* noCabeca;
    No* noFim;
public:
    ListaEncadeada(){
        noCabeca = NULL;
    }

    void addNewDados(Dados dados){
        No *noAtual = noCabeca;
        while (noAtual != NULL) {
            if (noAtual->dados.id == dados.id){
                return;
            }
            noAtual = noAtual->proximo;
        };


        No *novoNo = new No;
        novoNo->dados = dados;
        novoNo->anterior = NULL;
        novoNo->proximo = NULL;
        if (noCabeca != NULL){
            novoNo->proximo = noCabeca;
            noCabeca->anterior = novoNo;
        } else {
            noFim = novoNo;
        }
        noCabeca = novoNo;
    }

    void printAll(){
        if (noCabeca == NULL){
            cout << "NO TASKS\n";
            return;
        }

        No *noAtual;
        noAtual = noFim;

        while (noAtual != NULL){
            cout << noAtual->dados.id << " " << noAtual->dados.descricao << '\n';
            noAtual = noAtual->anterior;
        }
    }

    void deleteById(int id){
        if (noCabeca == NULL) return;

        No *noAtual = noCabeca;
        do {
            if (noAtual->dados.id == id){
                if (noAtual->anterior != NULL){
                    noAtual->anterior->proximo = noAtual->proximo;
                } else {
                    noCabeca = noAtual->proximo;
                }
                if (noAtual->proximo != NULL){
                    noAtual->proximo->anterior = noAtual->anterior;
                } else {
                    noFim = noAtual->anterior;
                }
                delete noAtual;
                return;
            }
            noAtual = noAtual->proximo;
        } while (noAtual != NULL);
    }
};


int main(){
    ListaEncadeada *listE = new ListaEncadeada();
    
    int qnt_op;
    cin >> qnt_op;

    for (int i = 0; i<qnt_op; i++){
        string op;
        cin >> op;
        if (op == "ADD"){
            int id;
            string descr;
            cin >> id >> descr;
            Dados d;
            d.id = id;
            d.descricao = descr;

            listE->addNewDados(d);
        }
        if (op == "REMOVE"){
            int id;
            cin >> id;
            listE->deleteById(id);
        }
        if (op == "LIST"){
            listE->printAll();
        }

    }

}