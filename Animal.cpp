#include <string>
#include <iostream>
using namespace std;
#include "Animal.h"

Animal::Animal() {
    name = "Romeo"; 
    type = "animal";
}

Animal::Animal(string newName, string newType) {
    name = newName;
    type = newType; 
}

string Animal::GetName() const {
    return name;
}
       
void Animal::SetName(string newName) {
    name = newName;
}
        
string Animal::GetType() const {
    return type;
}
        
void Animal::SetType(string newType) {
    type = newType;
}
        
void Animal::print() const {
    cout << "Name: " << name << endl;        
    cout << "Animal Type: " << type << endl;
}