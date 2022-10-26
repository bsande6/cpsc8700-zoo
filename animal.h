#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal {

    private:
        const string animals[10] = {"Jerry", "Beth", "Rick", "Morty", "Summer", "Jeff", "Joe", "Bob", "Ava", "Sean"};
        //vector<Lemur> lemurs;

        string name;

        string initName() {
            // hardcoded array length
            return animals[rand() % 10];
        }


    public:
        Animal() {
            this->name = initName();
        };

        Animal( string n ) {
            this->name = n;
        }
        // Abstract function implemented by derived classes
        // virtual void printAnimalInfo(Animal *a) = 0;

        string getName() { return name; }

        void virtual printMsg() = 0; //virtual function to print message
        
};

#endif