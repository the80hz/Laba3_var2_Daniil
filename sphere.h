//
// Created by Даниил Вольгов on 11.05.2022.
//

#ifndef DANIIL_SPHERE_H
#define DANIIL_SPHERE_H
#include "figure.h"

class sphere: public figure{
protected:
    double _radius;
public:
    double area() const override;
    double volume() const override;
    string info() const override;
    void print() const override;
    explicit sphere(int radius = 0);
};

#endif //DANIIL_SPHERE_H
