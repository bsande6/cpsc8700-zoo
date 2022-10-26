#ifndef KANGAROO_H
#define KANGAROO_H

#include "animal.h"

using namespace std;

class Kangaroo: public Animal {

   private:
        static int counter;
    public:
        Kangaroo() : Animal() {counter++;}
        Kangaroo(string name) : Animal(name) {counter++;}

        void printMsg() {
            cout << "My name is " << this->getName() << ", I am a kangaroo, I hop around and have a pouch.\n";
        }
    
        static int getCount() { return counter; }
};

int Kangaroo::counter = 0;

#endif