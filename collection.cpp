//
// Created by Даниил Вольгов on 11.05.2022.
//

#include "collection.h"

int collection::number(){
    return _num;
}

void collection::add(figure* obj){
    ++_num;
    _A = (figure**)realloc(_A, _num * sizeof(figure*));
    _A[_num - 1] = obj;
}

void collection::printAll(){
    for (int i = 0; i < _num; ++i)
    {
        _A[i]->print();
        cout << "Surface area: " << _A[i]->area() << endl
             << "Volume: " << _A[i]->volume() << endl << endl;
    }
    cout << "[0] Back-->";
}

void collection::delIndex(int index) {
    delete _A[index];
    for (int i = index; i < _num; ++i)
        _A[index] = _A[index + 1];
    --_num; // уменьшаем кол-во так как удалили объект
    _A = (figure**)realloc(_A, _num * sizeof(figure*));
}

void collection::delAll() {
    for (int i = 0; i < _num; ++i)
        delete _A[i];
    _num = 0;
    _A = (figure**)realloc(_A, _num * sizeof(figure*));
}

figure* collection::funcRand() {
    int value = randomInt(1, 3);
    if (value == 1)
        return new cube(randomInt(1, 100));
    else if (value == 2)
        return new sphere(randomInt(1, 100));
    else if (value == 3)
        return new cone(randomInt(1, 100), randomInt(1, 100), randomInt(1, 100));
    else cout << "Error!" << endl;
}

collection::~collection()
{
    delAll();
}
