/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   DuplamenteEncadeada.hpp
 * Author: guiva
 *
 * Created on 25 de Novembro de 2023, 12:19
 */

#ifndef DUPLAMENTEENCADEADA_HPP
#define DUPLAMENTEENCADEADA_HPP
#include <cstdlib>
using namespace std;
struct no{
    int valor;
    struct no *prox;
    struct no *ant;
};
class DuplamenteEncadeada {
public:
    no *inicio=NULL, *fim=NULL, *topo = NULL, *aux = NULL; 
    DuplamenteEncadeada();
    DuplamenteEncadeada(const DuplamenteEncadeada& orig);
    virtual ~DuplamenteEncadeada();
    void cabecalho();
    void menu();
    void inserir();
    void listar();
    void remover();
    bool vazio(struct no *);
    void pesquisar();
    bool verificaValorExistente(int);
    void elementoMeio();
private:

};

#endif /* DUPLAMENTEENCADEADA_HPP */

