//
// Created by Даниил Вольгов on 11.05.2022.
//

#ifndef DANIIL_CONE_H
#define DANIIL_CONE_H
#include "figure.h"

class cone: public figure{
protected:
    double _length, _height, _radius;
public:
    double area() const override;
    double volume() const override;
    string info() const override;
    void print() const override;
    explicit cone(int length = 0, int height = 0, int radius = 0);
};

#endif //DANIIL_CONE_H
