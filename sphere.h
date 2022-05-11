//
// Created by Даниил Вольгов on 11.05.2022.
//

#include "figure.h"
#ifndef DANIIL_SPHERE_H
#define DANIIL_SPHERE_H


class sphere: public figure{
protected:
    double _radius;
public:
    double area() const override;
    double volume() const override;
    string info() const override;
    void print() const override;
};


#endif //DANIIL_SPHERE_H
