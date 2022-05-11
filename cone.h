//
// Created by Даниил Вольгов on 11.05.2022.
//

#include "figure.h"
#ifndef DANIIL_CONE_H
#define DANIIL_CONE_H


class cone: public figure{
protected:
    double _length, _height, _radius;
public:
    double area() const override;
    double volume() const override;
    string info() const override;
    void print() const override;
};


#endif //DANIIL_CONE_H
