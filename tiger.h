#ifndef TIGER_H
#define TIGER_H

#include <iostream>

using namespace std;

class Tiger {

   private:
    string name;
    private static int counter;

      

    public:
        Tiger();
        Tiger(string name) {this->name=name; counter++}
        
    
};

#endif