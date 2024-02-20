/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   tipoDeMedia.cpp
 * Author: guiva
 * 
 * Created on 4 de Setembro de 2023, 02:00
 */

#include "mediaFinal.hpp"
#include <iostream>

using namespace std;

tipoDeMedia::tipoDeMedia() {
}

tipoDeMedia::tipoDeMedia(const tipoDeMedia& orig) {
}

tipoDeMedia::~tipoDeMedia() {
}
void tipoDeMedia::lerNotas(){
    float n1, n2;
    char opc;
    
    cout << "Indorme nota 1: ";
    cin >> n1;
    cout << "Informe nota 2: ";
    cin >> n2;

    
    cout << endl;
    
    cout << "A - PARA MÉDIA ARITMÉTICA\n"
            "P - PARA MÉDIA PONDERADA\n";
    cin >> opc;
    this->mediaSelecionada(opc,n1,n2);
}
float tipoDeMedia::calculaMediaAritmetica(float n1, float n2){
    return (n1+n2)/3;
}

float tipoDeMedia::calculaMediaPonderada(float n1, float n2){
   return (n1*5+n2*5)/10;
}
float tipoDeMedia::mediaSelecionada(char opc, float n1, float n2){
    float mediaFinal;
    if(opc == 'A' || opc == 'a'){
        mediaFinal = this->calculaMediaAritmetica(n1,n2);
    }else
        if(opc == 'P' || opc == 'p'){
           mediaFinal = this->calculaMediaPonderada(n1,n2);
            }else{
                cout << "Inválido";
                exit(0);
            }
    cout << "Media Final: " << mediaFinal << endl;
}

