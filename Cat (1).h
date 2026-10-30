#ifndef CAT_H
#define CAT_H

#include <string>
#include "Animal.h"

class Cat : public Animal {
    private:
        double *weight;

    public:
        // Constructors and copy-control methods
        Cat();
        Cat(string, double);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();

        // Accessor/Mutator functions for weight
        void SetWeight(double newWeight);
        double GetWeight() const;

        // Class method to print information about the cat.
        void print() const;
};

#endif
