/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   retornarMenorNumero.cpp
 * Author: guiva
 * 
 * Created on 4 de Setembro de 2023, 01:32
 */

#include "retornarMenorNumero.hpp"
#include <iostream>

using namespace std;

retornarMenorNumero::retornarMenorNumero() {
}

retornarMenorNumero::retornarMenorNumero(const retornarMenorNumero& orig) {
}

retornarMenorNumero::~retornarMenorNumero() {
}
void retornarMenorNumero::informarNumeros(){
    int n1, n2;
    cout << "informe o primeiro número: ";
    cin >> n1;
    cout << "informe segundo número: ";
    cin >> n2;
    cout << this->menorNumero(n1,n2);
}

int retornarMenorNumero::menorNumero(int n1,int n2){
    if(n1<n2){
        return n1;
    }else{
        return n2;
    }
}

