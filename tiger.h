#ifndef TIGER_H
#define TIGER_H

#include <iostream>

using namespace std;

class Tiger: public Animal {

   private:
    string name;
    static int counter;

    public:
        Tiger();
        Tiger(string name) {this->name=name; counter++;}
        
    
};

#endif