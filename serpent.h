#ifndef SERPENT_H
#define SERPENT_H

#include <iostream>

using namespace std;

class Serpent: public Animal {

   private:
    string name;

      

    public:
        Serpent() : Animal() {};

        void printMsg() {
            cout << "My name is " << this->getName() << ", I am a kangaroo, I hop around and have a pouch.";
        }
    
};
#endif