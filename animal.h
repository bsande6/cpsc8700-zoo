#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <map>
#include <string>

using namespace std;

class Animal {

    private:
        const static string animals[20];

        static map<string, int> nameTracker;

        string name;

        string initName() {
            // hardcoded array length
            return Animal::animals[rand() % 20]; 

            //approach for better name selection:

                // use a dictionary / override names in the array when they are picked, repick if taken
        }


    public:
        Animal();

        Animal( string n ) {
            this->name = n;
        }
        // Abstract function implemented by derived classes
        // virtual void printAnimalInfo(Animal *a) = 0;

        string getName() { return name; }

        void virtual printMsg() = 0; //virtual function to print message

        void static initNameList();
        
};





#endif