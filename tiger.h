#ifndef TIGER_H
#define TIGER_H

#include <iostream>

using namespace std;

class Tiger: public Animal {

   private:
    static int counter;

    public:
        Tiger() : Animal() { counter++; };
        Tiger(string name) : Animal(name) { counter++; }

        void printMsg() {
            cout << "My name is " << this->getName() << ", I am a kangaroo, I hop around and have a pouch.";
        }
        
    
};

int Tiger::counter = 0;

#endif