#ifndef LEMUR_H
#define LEMUR_H

#include <iostream>

#include "animal.h"

using namespace std;

class Lemur: public Animal {

   private:
    string name;
      

    public:
        Lemur() {this->name="Jeff";};
        Lemur(string name) {this->name=name;}
    
};
#endif