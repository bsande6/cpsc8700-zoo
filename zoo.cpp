#include <string.h>

#include "zoo.h"

Zoo *Zoo::instance = 0;

void Zoo::addAnimals(string animal, int val) {
    char * writable = new char[animal.size() + 1];
        copy(animal.begin(), animal.end(), writable);
        writable[animal.size()] = '\0'; 
        if (strcmp(writable, "lemur")==0) {
            for (int i=0; i < val; i++) {
                instance->animals.push_back(Lemur());
            }
        }
}


int main(int argc, char *argv[]) {
    Zoo *z = z->getInstance();

    ifstream inFile;
    
    inFile.open("input.txt");
   
    if (!inFile) {
        cerr << "Unable to open file" << endl;
        exit(1);  
    }
    string animal;
    int val=0;
    while (inFile >> animal) {
        inFile >> val;
        z->addAnimals(animal, val);
        // consider function to convert animal string to lowercase
        

    }

 
    return 0;

}