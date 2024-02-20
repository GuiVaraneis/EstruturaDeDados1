/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   tipoDeMedia.hpp
 * Author: guiva
 *
 * Created on 4 de Setembro de 2023, 02:00
 */

#ifndef TIPODEMEDIA_HPP
#define TIPODEMEDIA_HPP

class tipoDeMedia {
public:
    tipoDeMedia();
    tipoDeMedia(const tipoDeMedia& orig);
    virtual ~tipoDeMedia();
    void lerNotas();
    float calculaMediaAritmetica(float,float);
    float calculaMediaPonderada(float,float);
    float mediaSelecionada(char, float, float);
private:

};

#endif /* TIPODEMEDIA_HPP */

