//
// Created by Даниил Вольгов on 11.05.2022.
//

#include "cone.h"

double cone::area() const{
    return M_PI * _radius * (_radius + _length); // S = pi * r * (r + l)
}
double cone::volume() const{
    return (1.0/3) * area() * _height; // V = 1/3 * S * h
}
string cone::info() const{
    return "Cone";
}
void cone::print() const{
    cout << "Name of figure: " << info() << endl << "Length: " << _length <<
    endl << "Height: " << _height << endl << "Radius: " << _radius << endl;
}