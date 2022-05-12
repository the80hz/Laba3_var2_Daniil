//
// Created by Даниил Вольгов on 12.05.2022.
//

#include "randomInt.h"

int randomInt(unsigned int min, unsigned int max){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(min,max); // distribution in range [1, 6]
    return dist6(rng);
}