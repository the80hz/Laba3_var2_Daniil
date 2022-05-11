/*
 * Lab #3 var 2
 * by Volgov Daniil 6113
 */

#include <iostream>

using namespace std;
void printMenu(){
    cout << "\x1B[32mMenu:\033[0m\t\n" <<
    "\x1B[32m[1]\033[0m\t Add cube\n" <<
    "\x1B[32m[2]\033[0m\t Add sphere\n" <<
    "\x1B[32m[3]\033[0m\t Add cone\n" <<
    "\x1B[32m[4]\033[0m\t Add random object\n" <<
    "\x1B[32m[5]\033[0m\t Delete by index\n" <<
    "\x1B[32m[6]\033[0m\t Delete all\n" <<
    "\x1B[32m[7]\033[0m\t Print all\n" <<
    "\x1B[32m[8]\033[0m\t Help\n" <<
    "\x1B[32m[0]\033[0m\t Exit";
};

int main() {
    int command = 8;
    while(true){
        switch(command){
            case 1:
                cout << "Ввод нового куба";
                break;
            case 2:
                cout << "Ввод нового шара";
                break;
            case 3:
                cout << "Ввод нового конуса";
                break;
            case 4:
                cout << "Рандомный объект";
                break;
            case 5:
                cout << "Удаление по индексу";
                break;
            case 6:
                cout << "Удаление всех";
                break;
            case 7:
                cout << "Вывод всех объектов";
                break;
            case 8:
                cout << endl;
                printMenu();
                break;
            case 0:
                command = 0;
            default:
                break;
        }
        cout << endl << "Enter: ";
        cin >> command;
        if (command == 0) break;
    }
    return 0;
}
