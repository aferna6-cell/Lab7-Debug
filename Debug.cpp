#include <iostream>
using namespace std;
#include <string>

#include "Cat.h"

int main() {
    string catName;
    double weight;
    //Cat myCat;

    cout << "Enter cat name: ";
    getline(cin, catName);
    cout << "Enter cat weight: ";
    cin >> weight;
    Cat myCat(catName, weight);
    
    cout << endl << "Print Cat Information: \n";
    myCat.print();

    return 0;
}



