#include "animal.h"

map<string, int> Animal::nameTracker = {};

void Animal::initNameList() {

    if ((int)Animal::nameTracker.size() == 0) {

        for( int i = 0; i < 20; i++ ) {

            Animal::nameTracker[Animal::animals[i]] = 0;

        }

    }

}

Animal::Animal() {
    
    string n = initName();

    if ( Animal::nameTracker[n] == 0 ) { // case for first usage of name
        this->name = n;
        Animal::nameTracker[n] = 1;
    }
    // case for 2nd + usage of name
    else {  // Dynamically assign name based on previous names
        Animal::nameTracker[n] = Animal::nameTracker[n] + 1;
        string n2 = n + " ";

        if( Animal::nameTracker[n] == 2 ) {
            n2 = n2 + "Jr";
        }
        else if ( Animal::nameTracker[n] == 3 ) {
            n2 = n2 + "the 3rd";
        }
        else if ( Animal::nameTracker[n] == 4 ) {
            n2 = n2 + "the 4th";
        }
        else {
            n2 = n2 + to_string(Animal::nameTracker[n]);
        }

        this->name = n2;

    }

}

const string Animal::animals[20] = {"Jerry", "Beth", "Rick", "Morty", "Summer", "Jeff", "Joe", "Bob", "Ava", "Sean", 
            "Tickles", "Whiskers", "Elmo", "Bird", "Fluffy", "Kitty", "Fido", "Leo", "Alexander", "Ella" };