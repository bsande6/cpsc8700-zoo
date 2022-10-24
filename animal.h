#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal {

    private:
        const string animals[10] = {"Jerry", "Beth", "Rick", "Morty", "Summer", "Jeff", "Joe", "Bob", "Ava", "Sean"};
        //vector<Lemur> lemurs;


    public:
        Animal() {};
        // Abstract function implemented by derived classes
        //virtual void printAnimalInfo(Animal *a) = 0;
        string getName() {
            // hardcoded array length]
            return animals[rand() % 10];
        }
};

#endif