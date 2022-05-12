//
// Created by Даниил Вольгов on 11.05.2022.
//

#include "cube.h"

double cube::area() const{
    return 6 * _side * _side; // S = 6 * a^2
}
double cube::volume() const{
    return _side * _side * _side; // V = a^3
}
string cube::info() const{
    return "Cube";
}
void cube::print() const{
    cout << "Name of figure: " << info() << endl << "Side: " << _side << endl;
}
cube::cube(int side):_side(side){}
