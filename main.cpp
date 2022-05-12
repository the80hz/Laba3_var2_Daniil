/*
 * Lab #3 var 2
 * by Volgov Daniil 6113
 */

#include <iostream>
#include "printMenu.h"
#include "randomInt.h"

using namespace std;

int main(){
    int command = 8;
    while(true){
        int a = 0, b = 0, c = 0;
        switch(command){
            case 1:
                while(a <= 0){
                    cout << "Enter side: ";
                    cin >> a;
                }

                cout << "Cube was successfully added!" << endl;
                break;
            case 2:
                while(a <= 0){
                    cout << "Enter radius: ";
                    cin >> a;
                }

                cout << "Sphere was successfully added!" << endl;
                break;
            case 3:
                while(a <= 0){
                    cout << "Enter length: ";
                    cin >> a;
                }
                while(b <= 0){
                    cout << "Enter height: ";
                    cin >> b;
                }
                while(c <= 0){
                    cout << "Enter radius: ";
                    cin >> c;
                }

                cout << "Cone was successfully added!" << endl;
                break;
            case 4:
                cout << "Рандомный объект";

                cout << "Random object was successfully added!" << endl;
                break;
            case 5:
                cout << "Удаление по индексу";

                cout << "Object was successfully deleted!" << endl;
                break;
            case 6:
                cout << "Удаление всех";

                cout << "All objects have been deleted!" << endl;
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
        cout << endl << "Enter menu: ";
        cin >> command;
        cout << endl;
        if (command == 0) break;
    }
    return 0;
}
