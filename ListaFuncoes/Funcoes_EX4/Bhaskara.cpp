/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Bhaskara.cpp
 * Author: guiva
 * 
 * Created on 4 de Setembro de 2023, 02:33
 */

#include "Bhaskara.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Bhaskara::Bhaskara() {
}

Bhaskara::Bhaskara(const Bhaskara& orig) {
}

Bhaskara::~Bhaskara() {
}
void Bhaskara::coeficientes(){
    int a,b,c;
    
    cout << "Coeficiente A: ";
    cin >> a;
    cout << "Coeficiente B: ";
    cin >> b;
    cout << "Coeficiente C: ";
    cin >> c;
    
    int resultado = this->determinante(a,b,c);
    cout << "Raiz 1: " << this->extrairRaizX1(a,b,resultado) << endl;
    cout << "Raiz 2: " << this->extrairRaizX2(a,b,resultado) << endl;
    
    
}

int Bhaskara::determinante(int a, int b, int c){
   return pow(b,2) - 4 * a * c;
}
int Bhaskara::extrairRaizX1(int a, int b, int resultado){
    return (-b + sqrt(resultado)) / 2 * a;
}
int Bhaskara::extrairRaizX2(int a, int b, int resultado){
    return (-b - sqrt(resultado))/2 * a;
}
