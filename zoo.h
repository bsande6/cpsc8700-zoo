#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <fstream>
#include <vector>
#include "lemur.h"

using namespace std;

class Zoo {

   private:

        static Zoo* instance;
        string name;
        vector<Animal> animals;

        // Private constructor so that no objects can be created.
        Zoo() {}
        Zoo(string name) {this->name=name;}

    public:
        // can be named anything, but recommended to have word Instance in the name

        static Zoo* getInstance() {

            if (!instance) instance = new Zoo;
            return instance;

        }
        void addAnimals(string animal, int val);

        int getTotalAnimals();
};

#endif