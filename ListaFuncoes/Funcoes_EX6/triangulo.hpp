/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   triangulo.hpp
 * Author: guiva
 *
 * Created on 4 de Setembro de 2023, 03:37
 */

#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

class triangulo {
public:
    triangulo();
    triangulo(const triangulo& orig);
    virtual ~triangulo();
    void ladosTriangulo();
    float verificarTipoTriangulo(float,float,float);
private:

};

#endif /* TRIANGULO_HPP */

