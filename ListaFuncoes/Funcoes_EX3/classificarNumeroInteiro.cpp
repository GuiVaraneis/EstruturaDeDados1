/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   classificarNumeroInteiro.cpp
 * Author: guiva
 * 
 * Created on 4 de Setembro de 2023, 02:24
 */

#include "classificarNumeroInteiro.hpp"
#include <iostream>

using namespace std;

classificarNumeroInteiro::classificarNumeroInteiro() {
}

classificarNumeroInteiro::classificarNumeroInteiro(const classificarNumeroInteiro& orig) {
}

classificarNumeroInteiro::~classificarNumeroInteiro() {
}
void classificarNumeroInteiro::lerDados(){
    int num;
    cout << "Informe número: ";
    cin >> num;
    cout << this->classificarInteiro(num);
    
}
int classificarNumeroInteiro::classificarInteiro(int num){
    if(num > 0){
        return 1;
    }else
        if(num < 0){
            return -1;
        }else{
            return 0;
        }
}


