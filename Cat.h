#ifndef CAT_H
#define CAT_H

#include <string>
#include "Animal.h"

class Cat : public Animal {
    private:
        double *weight;

    public:
        // A constructor with parameters suppresses the compiler-generated
        // default constructor, so Cat needs its own.
        Cat();
        Cat(string, double);

        // weight is allocated with new, so Cat needs a deep copy,
        // a deep assignment, and a destructor (the Rule of Three).
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
