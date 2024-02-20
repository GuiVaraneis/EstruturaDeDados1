/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   triangulo.cpp
 * Author: guiva
 * 
 * Created on 4 de Setembro de 2023, 03:37
 */

#include "triangulo.hpp"
#include <iostream>

using namespace std;

triangulo::triangulo() {
}

triangulo::triangulo(const triangulo& orig) {
}

triangulo::~triangulo() {
}
void triangulo::ladosTriangulo(){
    float lado1,lado2,lado3;
    
    cout << "Lado 1: ";
    cin >> lado1;
    cout << "lado 2: ";
    cin >> lado2;
    cout << "lado 3: ";
    cin >> lado3;
    this->verificarTipoTriangulo(lado1,lado2,lado3);
}
float triangulo::verificarTipoTriangulo(float lado1, float lado2, float lado3){
    if(lado1!=lado2 && lado2!=lado3 && lado3 != lado1){
        cout << "escaleno";
    }else
        if(lado1 == lado2 && lado2 == lado3 && lado3 == lado1){
            cout << "Equilátero";
        }else{
            cout << "Isósceles";
        }
}


