#include "Cat.h"
#include <iostream>
using namespace std;
#include <string>

// TO DO: Write the code to assign the weight variable in the cat class to the entered weight       
Cat::Cat(string newName, double newWeight) {
    name = newName; 
    type = "Cat";
    weight = new double; 
    *weight = newWeight; 
}

// TO DO: There are four functions that should be defined here.
// These should match the ones you declared in Cat.h 


// Mutator Method
void Cat::SetWeight(double newWeight) {
    *weight = newWeight; 
}

// Accessor Method
double Cat::GetWeight() const {
    return *weight;
}


void Cat::print() const {
    // Call the Animal class print functiom first. 
    Animal::print();
    // Then print the cat specdific information. 
    cout << "The cat weighs " << *weight << " pounds." << endl;
}
