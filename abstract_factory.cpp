#include <iostream>
#include <string>
#include <memory>

#include "lemur.h"
#include "kangaroo.h"
#include "tiger.h"
#include "serpent.h"
#include "wolf.h"

using namespace std;

class AbstractFactory {
   public:
      virtual Animal* createAnimal(char*animalType) const = 0;
};

class AnimalFactory: public AbstractFactory {
   public:
      Animal *createAnimal(char* animalType) const {

         if (strcmp(animalType, "lemur")==0) {
            return new Lemur();
         }
         else if (strcmp(animalType, "kangaroo")==0) {
            return new Kangaroo();
         }
         else if (strcmp(animalType, "tiger")==0) {
            return new Tiger();
         }
         else if (strcmp(animalType, "serpent")==0) {
            return new Serpent();
         }
         else if (strcmp(animalType, "wolf")==0) {
            return new Wolf();
         }
         else { return nullptr; } //shouldn't ever get this case

      }
};