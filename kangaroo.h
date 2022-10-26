#ifndef KANGAROO_H
#define KANGAROO_H

#include "animal.h"

using namespace std;

class Kangaroo: public Animal {

   private:

    public:
        Kangaroo() : Animal() {};

        void printMsg() {
            cout << "My name is " << this->getName() << ", I am a kangaroo, I hop around and have a pouch.";
        }
    
};

#endif