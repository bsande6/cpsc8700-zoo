#ifndef LEMUR_H
#define LEMUR_H

#include <iostream>

#include "animal.h"

using namespace std;

class Lemur: public Animal {

   private:

    static int counter;
      

    public:
        Lemur() : Animal() {
            this->counter++;
        }

        Lemur(string name) : Animal(name) {
            this->counter++;
        }
        ~Lemur() {this->counter--;}
        //void printAnimalInfo(Animal *animal) {cout << "info" << endl;}

        void printMsg() {
            cout << "My name is " << this->getName() << ", I am a Lemur, I make Lemur noises and enjoy causing trouble.\n";
        }
    
};

int Lemur::counter = 0;

#endif