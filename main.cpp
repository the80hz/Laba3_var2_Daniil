/*
 * Lab #3 var 2
 * by Volgov Daniil 6113
 */

#include <iostream>
#include "printMenu.h"
#include "collection.h"
#include "randomInt.h"

using namespace std;

int main(){
    int command = 8;
    auto* data = new collection();
    while(true){
        int a = 0, b = 0, c = 0;
        switch(command){
            case 1:
                while(a <= 0){
                    cout << "Enter side: ";
                    cin >> a;
                }
                data->add(new cube(a));
                cout << "Cube was successfully added!" << endl;
                break;
            case 2:
                while(a <= 0){
                    cout << "Enter radius: ";
                    cin >> a;
                }
                data->add(new sphere(a));
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
                data->add(new cone(a, b, c));
                cout << "Cone was successfully added!" << endl;
                break;
            case 4:
                data->add(data->funcRand());
                cout << "Random object was successfully added!" << endl;
                break;
            case 5:
                while(a <= 0){
                    cout << "Enter index > 0: ";
                    cin >> a;
                }
                data->delIndex(a);
                cout << "Object was successfully deleted!" << endl;
                break;
            case 6:
                data->delAll();
                cout << "All objects have been deleted!" << endl;
                break;
            case 7:
                data->printAll();
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
