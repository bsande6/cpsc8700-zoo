#ifndef WOLF_H
#define WOLF_H

#include <iostream>

using namespace std;

class Wolf: public Animal {

   private:
    static int counter;
      

    public:
        Wolf() : Animal() {counter++;};
        Wolf(string name) : Animal(name) {counter++;}
    
        void printMsg() {
            cout << "My name is " << this->getName() << ", I am a wolf. I eat small animals and travel in packs. I can howl.\n";
        }

        static int getCount() { return counter; }

        Wolf* clone() {
            return new Wolf();
        }

};

int Wolf::counter = 0;

#endif