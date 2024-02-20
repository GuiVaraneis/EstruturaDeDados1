/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Pilha.hpp
 * Author: guiva
 *
 * Created on 24 de Outubro de 2023, 10:05
 */

#ifndef PILHA_HPP
#define PILHA_HPP
#include <cstdlib>
class Pilha {
    struct no {
        int valor;
        struct no *ant;
    };
public:
    no *topo, *aux;
    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();
    void cabecalho();
    bool vazio(struct no *);
    void Inserir();
    void remover();
    void listar();
    void menu();
    void pesquisar();
    void apresentarPares();
    void elementoMeio();
private:

};

#endif /* PILHA_HPP */

