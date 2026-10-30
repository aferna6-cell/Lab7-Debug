#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;
#include <string>

class Animal {
    protected: 
        string name;
        string type; 
    public: 
        Animal();
        Animal(string, string);
        string GetName() const;
        void SetName(string newName);
        string GetType() const;
        void SetType(string newType);
        virtual void print() const;
};
#endif