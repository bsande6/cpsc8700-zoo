#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <fstream>
#include <vector>
#include "abstract_factory.cpp"

using namespace std;

class Zoo {

   private:

        static Zoo* instance;
        string name;
        vector<Animal*> animals;

        // Private constructor so that no objects can be created.
        Zoo() {}
        Zoo(string name) {this->name=name;}

    public:
        static Zoo* getInstance() {

            if (!instance) instance = new Zoo;
            return instance;

        }
        // Lemur createLemur() { // Factory method.
        //     return new Lemur();
        // }
        void addAnimals(string animal, int val);

        void printAnimals();

        int getTotalAnimals();
};

#endif