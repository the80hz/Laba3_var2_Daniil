//
// Created by Даниил Вольгов on 11.05.2022.
//

#ifndef DANIIL_COLLECTION_H
#define DANIIL_COLLECTION_H
#include <iostream>
#include "randomInt.h"
#include "cube.h"
#include "sphere.h"
#include "cone.h"

class collection{
private:
    int _num = 0;
    figure** _data = nullptr;

public:
    void add(figure* obj);
    void printAll();
    void delIndex(int index);
    void delAll();
    static figure* funcRand();
    ~collection();
};

#endif //DANIIL_COLLECTION_H
