#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <map>
#include <string>

#define NUM_NAMES 20

using namespace std;

class Animal {

    private:
        const static string animals[NUM_NAMES];

        static map<string, int> nameTracker;

        string name;

        string initName() {
            return Animal::animals[rand() % NUM_NAMES]; 
        }


    public:
        Animal();

        Animal( string n ) {
            this->name = n;
        }

        string getName() { return name; }

        void virtual printMsg() = 0; //virtual function to print message

        void static initNameList(); //function called to initialize name list
        
};





#endif