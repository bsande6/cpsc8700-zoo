#include <string.h>
#include <time.h>

#include "zoo.h"
#include "animal.cpp"

Zoo *Zoo::instance = 0;

void Zoo::addAnimals(string animal, int val) {
    shared_ptr<AnimalFactory> factory = make_shared<AnimalFactory>();
    char * writable = new char[animal.size() + 1];
    copy(animal.begin(), animal.end(), writable);
    writable[animal.size()] = '\0';

    for( int i = 0; i < val; i++ ) {
        instance->animals.push_back(factory->createAnimal(writable));
    }

    // Animal* new_animal = factory->createAnimal(writable);
    
    // instance->animals.push_back(new_animal);

    // if (strcmp(writable, "lemur")==0) {
    //     // could put a check here to ensure that the the number of lemurs is less than the amount of lemur names available
    //     for (int i=0; i < val; i++) {
    //         instance->animals.push_back(Lemur());
    //     }
    // }
}

void Zoo::printAnimals() {
    cout << "Zoo ""Wild Things"" has the following animals: \n"
        <<  "---------------------------------------------\n";

    //print counts of animals
    cout << "There are a total of " << instance->animals.size() << " in the zoo.\n";

    cout << "There are a total of " << Tiger::getCount() << " tigers, " <<
        Wolf::getCount() << " wolves, " << Kangaroo::getCount() << " Kangaroo, " << Lemur::getCount() << " Lemurs, and "
        << Serpent::getCount() << " Serpents.\n";
        
    // print animal messages
    for( int i = 0; i < (int)instance->animals.size(); i++ ) {
        instance->animals[i]->printMsg();
    }

}


int main(int argc, char *argv[]) {
    srand(time(NULL));
    Zoo *z = z->getInstance();

    ifstream inFile;
    // Need to change this to use input redirection
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

    z->printAnimals();
 
    return 0;

}