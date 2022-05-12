//
// Created by Даниил Вольгов on 11.05.2022.
//

#ifndef DANIIL_FIGURE_H
#define DANIIL_FIGURE_H
#include <iostream>
#include <cmath>

using namespace std;

class figure{
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
    virtual string info() const = 0;
    virtual void print() const = 0;
};

#endif //DANIIL_FIGURE_H
