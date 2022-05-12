//
// Created by Даниил Вольгов on 11.05.2022.
//

#ifndef DANIIL_CUBE_H
#define DANIIL_CUBE_H
#include "figure.h"

class cube: public figure{
protected:
    double _side;
public:
    double area() const override;
    double volume() const override;
    string info() const override;
    void print() const override;
    explicit cube(int side = 0);
};

#endif //DANIIL_CUBE_H
