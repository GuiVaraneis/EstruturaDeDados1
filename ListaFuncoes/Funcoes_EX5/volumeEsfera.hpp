/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   volumeEsfera.hpp
 * Author: guiva
 *
 * Created on 4 de Setembro de 2023, 03:25
 */

#ifndef VOLUMEESFERA_HPP
#define VOLUMEESFERA_HPP

class volumeEsfera {
public:
    volumeEsfera();
    volumeEsfera(const volumeEsfera& orig);
    virtual ~volumeEsfera();
    void informeRaio();
    float volume(float);
private:

};

#endif /* VOLUMEESFERA_HPP */

