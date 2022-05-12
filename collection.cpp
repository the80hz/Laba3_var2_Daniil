//
// Created by Даниил Вольгов on 11.05.2022.
//

#include "collection.h"

void collection::add(figure* obj){
    _num++;
    _data = (figure**)realloc(_data, _num * sizeof(figure*));
    _data[_num - 1] = obj;
}

void collection::printAll(){
    for (int i = 0; i < _num; i++){
        _data[i]->print();
        cout << "Surface area: " << _data[i]->area() << endl
             << "Volume: " << _data[i]->volume() << endl << endl;
    }
}

void collection::delIndex(int index){
    index--;
    if(index > _num) return;
    delete _data[index];
    for(int i = index; i < _num; i++)
        _data[i] = _data[i + 1];
    _num--;
    _data = (figure**)realloc(_data, _num * sizeof(figure*));
}

void collection::delAll(){
    for (int i = 0; i < _num; i++)
        delete _data[i];
    _num = 0;
    _data = (figure**)realloc(_data, _num * sizeof(figure*));
}

figure* collection::funcRand(){
    int value = randomInt(1, 3);
    if (value == 1)
        return new cube(randomInt(1, 100));
    else if (value == 2)
        return new sphere(randomInt(1, 100));
    else if (value == 3)
        return new cone(randomInt(1, 100), randomInt(1, 100), randomInt(1, 100));
}

collection::~collection()
{
    delAll();
}
