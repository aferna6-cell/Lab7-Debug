#ifndef CAT_H
#define CAT_H

#include <string>
#include "Animal.h"

class Cat : public Animal {
    private:
        double *weight;

    public:
        // Constructor that takes the cat name and weight as input.
        Cat(string, double);
        
        // TO DO: There are four functions that should be declared here. 

        
        // Accessor/Mutator functions for weight
        void SetWeight(double newWeight);
        double GetWeight() const;

        // Class method to print information about the cat.
        void print() const;
};

#endif