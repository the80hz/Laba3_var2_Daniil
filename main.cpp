/*
 * Lab #3 var 2
 * by Volgov Daniil 6113
 */

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

class Figure{
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
    virtual string info() const = 0;
    virtual void print() const = 0;
};

class Cube: public Figure{
protected:
    double _side;
public:
    double area() const override{
        return 6 * pow(_side, 2); // S = 6 * a^2
    }
    double volume() const override{
        return pow(_side, 3); // V = a^3
    }
    string info() const override{
        return "Cube";
    }
    void print() const override{
        cout << "Name of figure: " << info() << endl << "Side: " << _side << endl;
    }
};

class Sphere: public Figure{
protected:
    double _radius;
public:
    double area() const override{
        return 4 * M_PI * pow(_radius, 2); // S = 4 * pi * r^2
    }
    double volume() const override{
        return (4.0 / 3) * M_PI * pow(_radius, 3); // V = 4/3 * pi * r^3
    }
    string info() const override{
        return "Sphere";
    }
    void print() const override{
        cout << "Name of figure: " << info() << endl << "Radius: " << _radius << endl;
    }
};

class Cone: public Figure{
protected:
    double _length, _height, _radius;
public:
    double area() const override{
        return M_PI * _radius * (_radius + _length); // S = pi * r * (r + l)
    }
    double volume() const override{
        return (1.0/3) * area() * _height; // V = 1/3 * S * h
    }
    string info() const override{
        return "Cone";
    }
    void print() const override{
        cout << "Name of figure: " << info() << endl << "Length: " << _length <<
            endl << "Height: " << _height << endl << "Radius: " << _radius << endl;
    }
};

class Collection{

};

int main() {
    printf("\x1B[32m\033[0m\t\t");



    return 0;
}
