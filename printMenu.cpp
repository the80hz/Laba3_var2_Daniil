//
// Created by Даниил Вольгов on 12.05.2022.
//

#include "printMenu.h"

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
}
