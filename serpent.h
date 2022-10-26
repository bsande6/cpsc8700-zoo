#ifndef SERPENT_H
#define SERPENT_H

#include <iostream>

using namespace std;

class Serpent: public Animal {

   private:
    static int counter;

    public:
        Serpent() : Animal() {counter++;}
        Serpent(string name) : Animal(name) {counter++;}

        void printMsg() {
            cout << "My name is " << this->getName() << ", I am a serpent. I slither around on my belly and eat rodents.\n";
        }
    
        static int getCount() { return counter; }

        Serpent* clone() {
            return new Serpent();
        }

};

int Serpent::counter = 0;

#endif