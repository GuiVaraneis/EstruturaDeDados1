/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Bhaskara.hpp
 * Author: guiva
 *
 * Created on 4 de Setembro de 2023, 02:33
 */

#ifndef BHASKARA_HPP
#define BHASKARA_HPP

class Bhaskara {
public:
    Bhaskara();
    Bhaskara(const Bhaskara& orig);
    virtual ~Bhaskara();
    void coeficientes();
    int determinante(int, int,int);
    int extrairRaizX1(int, int, int);
    int extrairRaizX2(int, int, int );
private:

};

#endif /* BHASKARA_HPP */

