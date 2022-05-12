//
// Created by Даниил Вольгов on 11.05.2022.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "randomInt.h"
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
    void delIndex(int index);
    void delAll();
    figure* funcRand();
    ~collection();
};


#endif //DANIIL_COLLECTION_H
