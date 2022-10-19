#ifndef LEMUR_H
#define LEMUR_H

#include <iostream>

#include "animal.h"

using namespace std;

class Lemur: public Animal {

   private:
    // do we provide random name or is this from input?
    string name;
      

    public:
        Lemur() {this->name="Jeff";}
        Lemur(string name) {this->name=name;}
        printInfo()
    
};
#endif