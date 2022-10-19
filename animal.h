#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal {

   private:


    public:
        Animal() {};
        // Abstract function implemented by derived classes
        virtual void printAnimalInfo(Animal *a) = 0;

     
};
#endif