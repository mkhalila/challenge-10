#include "SomeClass.h"
#include <iostream>
using std::cout;
using std::endl;

int SomeClass::getX() const {
    return x;
}

// TODO: add code here
void SomeClass::printItOut() const {
	cout << getX() << endl;
}

