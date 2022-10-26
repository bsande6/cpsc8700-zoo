#ifndef WOLF_H
#define WOLF_H

#include <iostream>

using namespace std;

class Wolf: public Animal {

   private:

      

    public:
        Wolf() : Animal() {};
    
        void printMsg() {
            cout << "My name is " << this->getName() << ", I am a kangaroo, I hop around and have a pouch.";
        }

};
#endif