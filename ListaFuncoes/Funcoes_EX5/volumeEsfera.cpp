/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   volumeEsfera.cpp
 * Author: guiva
 * 
 * Created on 4 de Setembro de 2023, 03:25
 */

#include "volumeEsfera.hpp"
#include <iostream>
#include <cmath>
using namespace std;

volumeEsfera::volumeEsfera() {
}

volumeEsfera::volumeEsfera(const volumeEsfera& orig) {
}

volumeEsfera::~volumeEsfera() {
}
void volumeEsfera::informeRaio(){
    float r;
    cout << "Informe raio: ";
    cin >> r;
    cout << this->volume(r);
    
}
float volumeEsfera::volume(float r){
    return 4/3 * M_PI * pow(r,3);
}
