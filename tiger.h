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
            cout << "My name is " << this->getName() << ", I am a tiger. I eat other animals with my sharp teeth and can roar loudly.\n";
        }
        
        static int getCount() { return counter; }

        Tiger* clone() {
            return new Tiger();
        }
    
};

int Tiger::counter = 0;

#endif