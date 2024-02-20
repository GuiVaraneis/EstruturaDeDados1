/*
 inicio
 topo
 aux
 fim
 */

#include "DuplamenteEncadeada.hpp"
#include <iostream>
#include <valarray>

DuplamenteEncadeada::DuplamenteEncadeada() {
}

DuplamenteEncadeada::DuplamenteEncadeada(const DuplamenteEncadeada& orig) {
}

DuplamenteEncadeada::~DuplamenteEncadeada() {
}

void DuplamenteEncadeada::cabecalho() {
    system("clear");
    cout << "\n1 -> PARA INSERIR\n"
            "2 -> PARA REMOVER\n"
            "3 -> PARA LISTAR\n"
            "4 -> PARA PESQUISAR\n";
    "5 -> PARA RETORNAR ELEMENTO DO MEIO DA LISTA";
            "-1 -> PARA SAIR\n";
}

bool DuplamenteEncadeada::vazio(struct no *campo) {
    if (campo == NULL) {
        return true;
    } else {
        return false;
    }

}

void DuplamenteEncadeada::menu() {

    while (true) {
        cabecalho();
        int opc;
        cout << "Selecione a opção que deseja: ";
        cin >> opc;

        switch (opc) {
            case 1:
                inserir();
                break;
            case 2:
                remover();
            case 3:
                listar();
                break;
            case 4:
                pesquisar();
                break;
            case 5:
                elementoMeio();
                break;
            case -1:
                 cout << "encerrando...";
                exit(0);
                break;
            default:
                cout << "opcção invalida";
                break;
        }
    }
}


void DuplamenteEncadeada::inserir() {
    this->aux = (struct no*) malloc(sizeof (this->aux));

    cout << "Insira um valor ";
    cin >> this->aux->valor;
     
    if (this->inicio == NULL) {
        this->aux->ant = NULL;
        this->aux->prox = NULL;
        this->inicio = this->aux;
    } else {
        this->aux->prox = NULL;
        this->aux->ant = this->fim;
        this->fim->prox = this->aux;
    }
    this->fim = this->aux;
    cout << "Valor inserido com sucesso" << endl;
    cout << "Pressione qualquer tecla para continuar" << endl;
    cin.ignore(1, ' ');
    }


void DuplamenteEncadeada::listar() {

    if (!vazio(this->inicio)) {

        for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
            cout << this->aux->valor << " ";
        }

        cout << endl;
    } else {
        cout << "A lista está vazia" << endl;
    }
    cout << "Pressione qualquer tecla para continuar" << endl;
    cin.ignore(1, ' ');
}

void DuplamenteEncadeada::remover() {
    bool removido = false;
    int valor;
    if (!vazio(this->inicio)) {

        cout << "Selecione o valor a ser Removido: " ;
        cin >> valor;
        for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
            if (valor == this->aux->valor) {
                if (this->aux == this->inicio) {
                    this->inicio = this->aux->prox;
                    this->aux->ant = NULL;
                    free(this->aux);
                    removido = true;
                    break;

                } else if (this->aux == this->fim) {
                    this->fim = this->aux->ant;
                    this->fim->prox = NULL;
                    free(this->aux);
                    removido = true;
                    break;
                } else {

                    struct no *temp = this->aux;
                    this->aux = this->aux->prox;
                    temp -> ant = this->aux;
                    free(temp);
                    removido = true;
                    break;
                }
                if (!removido) {
                    cout << "O valor solicitado a ser removido não foi encontrado";
                }
            }

        }
    } else {
        cout << "VAZIA!" << endl;
    }
    cout << "Pressione qualquer tecla para continuar" << endl;
    cin.ignore(1, ' ');
}

void DuplamenteEncadeada::pesquisar() {
    int valor;
    cout << "Selecione o valor que deseja pesquisar ";
    cin >> valor;

    if (!vazio(this->inicio)) {
        for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
            if (this->aux->valor == valor) {
                cout << "Valor encontrado: " << this->aux->valor;
            }
        }
    }
    cout << "Pressione qualquer tecla para continuar";
    cin.ignore(1, ' ');
}
void DuplamenteEncadeada::elementoMeio(){
    int cont = 0;
    for(this->aux = this->inicio; this->aux!=NULL; this->aux = this->aux->prox){
        cont++;
    }
     int meio = cont/2;
     this->aux = this->inicio;
     
     for(int i=0; i<meio; i++){
         this->aux = this->aux->prox;
     }
     if(this->aux = this->aux->prox){
         cout << "Elemento do meio da lista " << aux->valor << endl;
     }else{
         cout << "Não encontrado" << endl;
     }
    cout << "Pressione qualquer tecla para continuar" << endl;
    cin.ignore(1, ' ');
}
