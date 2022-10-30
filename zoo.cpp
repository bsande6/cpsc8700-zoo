#include <string.h>
#include <time.h>

#include "zoo.h"
#include "animal.h"

Zoo *Zoo::instance = 0;

void Zoo::addAnimals(string animal, int val) {

    Animal::initNameList();
    
    shared_ptr<AnimalFactory> factory = make_shared<AnimalFactory>();
    char * writable = new char[animal.size() + 1];
    copy(animal.begin(), animal.end(), writable);
    writable[animal.size()] = '\0';

    for( int i = 0; i < val; i++ ) {
        instance->animals.push_back(factory->createAnimal(writable));
    }

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

    string animal;
    int val=0;

    while (cin >> animal) {

        cin >> val;
        z->addAnimals(animal, val);
        
    }

    z->printAnimals();
 
    return 0;

}