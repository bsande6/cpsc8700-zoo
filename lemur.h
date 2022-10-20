#ifndef LEMUR_H
#define LEMUR_H

#include <iostream>

#include "animal.h"

using namespace std;

class Lemur: public Animal {

   private:
    // do we provide random name or is this from input?
    string name;

    static int counter;
      

    public:
        Lemur() {
            cout << this->getName() << endl;
            this->name=this->getName();
            this->counter++;}
        Lemur(string name) {this->name=name; 
            this->counter++;
        }
        ~Lemur() {this->counter--;}
        //void printAnimalInfo(Animal *animal) {cout << "info" << endl;}
    
};

int Lemur::counter = 0;

#endif