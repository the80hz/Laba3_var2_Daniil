//
// Created by Даниил Вольгов on 11.05.2022.
//

#include "cube.h"

double cube::area() const{
    return 6 * pow(_side, 2); // S = 6 * a^2
}
double cube::volume() const{
    return pow(_side, 3); // V = a^3
}
string cube::info() const{
    return "Cube";
}
void cube::print() const{
    cout << "Name of figure: " << info() << endl << "Side: " << _side << endl;
}
