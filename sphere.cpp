//
// Created by Даниил Вольгов on 11.05.2022.
//

#include "sphere.h"

double sphere::area() const{
    return 4 * M_PI * _radius * _radius; // S = 4 * pi * r^2
}
double sphere::volume() const{
    return (4.0 / 3) * M_PI * _radius * _radius * _radius; // V = 4/3 * pi * r^3
}
string sphere::info() const{
    return "Sphere";
}
void sphere::print() const{
    cout << "Name of figure: " << info() << endl << "Radius: " << _radius << endl;
}
sphere::sphere(int radius):_radius(radius){}
