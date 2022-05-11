//
// Created by Даниил Вольгов on 11.05.2022.
//

#include <iostream>
#include "cube.h"
#include "sphere.h"
#include "cone.h"
#ifndef DANIIL_COLLECTION_H
#define DANIIL_COLLECTION_H


class collection{
private:
    int _num;
    figure** _A = nullptr;

public:
    int number();
    void add(figure* obj);
    void printAll();
    void delIndex();
    void delAll();
};


#endif //DANIIL_COLLECTION_H
