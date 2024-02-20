/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Pilha.cpp
 * Author: guiva
 * 
 * Created on 24 de Outubro de 2023, 10:05
 */

#include "Pilha.hpp"
#include <iostream>
#include<cstdlib>

using namespace std;

Pilha::Pilha() {
    this->topo = NULL;
}

Pilha::Pilha(const Pilha& orig) {
}

Pilha::~Pilha() {

}

bool Pilha::vazio(struct no *campo) {
    if (campo == NULL) {
        return true;
    } else {
        return false;
    }
}

void Pilha::cabecalho() {
    system("clear");
    cout << "\n1 -> PARA INSERIR\n"
            "2 -> PARA REMOVER\n"
            "3 -> PARA LISTAR\n"
            "4 -> PARA PESQUISAR\n"
            "5-> PARA MOSTRAR VALORES PARES\n"
            "6-> PARA MOSTRAR O VALOR DO MEIO";
    
    "-1 -> PARA SAIR\n";
}

void Pilha::menu() {
    while (true) {
        cabecalho();
        int opc;
        cout << "Selecione a opção que deseja: ";
        cin >> opc;

        switch (opc) {
            case 1:
                Inserir();
                break;
            case 2:
                remover();
                break;
            case 3:
                listar();
                break;
            case 4:
                pesquisar();
                break;
            case 5:
                apresentarPares();
                break;
            case 6:
                elementoMeio();
                break;
            case -1:
                cout << "Encerrando...";
                exit(0);
                break;
            default:
                cout << "Opção Invalida";

        }
    }
}

void Pilha::Inserir() {
    this->aux = (struct no*) malloc(sizeof (this->aux));
    cout << "Digite um valor: ";
    cin >> this->aux->valor;
    if(this->topo == NULL){
        this->aux->ant = NULL;
    }
    
    this->topo = this->aux;
    cout << "pressione qualquer tecla para continuar ";
    fflush(stdin); // Limpa o buffer de entrada
    getchar(); // Aguarda a entrada do usuário

}

void Pilha::remover() {
    int valor;
    if (!vazio(this->topo)) {
        cout << "insira o valor que deseja remover: ";
        cin >> valor;
        for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
            if (this->aux->valor == valor) {
                this->topo = this->aux->ant;
                free(this->aux);

            }

        }
        cout << "valor não encontrado\n";
    }
    cout << "pressione qualquer tecla para continuar ";
    fflush(stdin); // Limpa o buffer de entrada
    getchar(); // Aguarda a entrada do usuário

}

void Pilha::listar() {
    if (!vazio(this->topo)) {
        for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
            cout << this->aux->valor << " ";

        }
    } else {
        cout << "A PILHA ESTÁ VAZIA!!!";
    }
    cout << "pressione qualquer tecla para continuar ";
    fflush(stdin); // Limpa o buffer de entrada
    getchar(); // Aguarda a entrada do usuário
}

void Pilha::pesquisar() {

    if (!vazio(this->topo)) {
        int valor;
        bool encontrado = false;
        cout << "Informe o valor que deseja encontrar";
        cin >> valor;
        for (this->aux = this->topo; aux != NULL; this->aux = this->aux->ant) {
            if (this->aux->valor == valor) {
                cout << this->aux->valor;
                encontrado = true;
                break;
            }
            if (!encontrado) {
                cout << "Não encontrado";
            }
        }
    } else {
        cout << "Fila vazia!!!";
    }
    cout << "pressione qualquer tecla para continuar ";
    fflush(stdin); // Limpa o buffer de entrada
    getchar(); // Aguarda a entrada do usuário
}

void Pilha::apresentarPares() {
    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        if (this->aux->valor % 2 == 0) {
            cout << this->aux->valor;
        }
    }
}
void Pilha::elementoMeio(){
    int cont = 0;
    for(this->aux = this->topo; this->aux!=NULL; this->aux = this->aux->ant){
        cont++;
    }
     int meio = cont/2;
     this->aux = this->topo;
     
     for(int i=0; i<meio; i++){
         this->aux = this->aux->ant;
     }
     if(this->aux == this->aux->ant){
         cout << "Elemento do meio da lista " << aux->valor << endl;;
     }else{
         cout << "Não encontrado" << endl;
     }
    cout << "Pressione qualquer tecla para continuar" << endl;
    cin.ignore(1, ' ');
}
