#include "Cat.h"
#include <iostream>
using namespace std;

// Default constructor: a Cat still needs its own weight allocation.
Cat::Cat() : Animal("Romeo", "Cat"), weight(new double(0.0)) {
}

// Constructor that receives a name and a weight.
Cat::Cat(string newName, double newWeight)
    : Animal(newName, "Cat"), weight(new double(newWeight)) {
}

// Copy constructor: allocate separate memory for the copied weight.
Cat::Cat(const Cat& other)
    : Animal(other), weight(new double(*other.weight)) {
}

// Copy assignment: copy both the Animal fields and the weight value.
Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        *weight = *other.weight;
    }
    return *this;
}

// Destructor: free the memory owned by this Cat.
Cat::~Cat() {
    delete weight;
}

// Mutator Method
void Cat::SetWeight(double newWeight) {
    *weight = newWeight;
}

// Accessor Method
double Cat::GetWeight() const {
    return *weight;
}

void Cat::print() const {
    // Call the Animal class print function first.
    Animal::print();
    // Then print the cat specific information.
    cout << "The cat weighs " << *weight << " pounds." << endl;
}
