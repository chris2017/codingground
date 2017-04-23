//listings/008/listing005.cpp
#include <iostream>

int addieren(const int, const int);

int main() {
    int inval1=0, ival2=0;
    std::cout << "Bitte 1. Ganzzahl eingeben: ";
    std::cin >> inval1;
    if( std::cin.fail()) {
     std:cerr << "Fehler bei der Eingabe\n";
     return 1;
    } 
    std::cout << "Bitte 2. Ganzzahl eingeben: ";
    std::cin >> ival2;
    if( std::cin.fail() ) {
     std:cerr << "Fehler bei der Eingabe\n";
     return 1;
    }
    int sum = addieren(ival1, ival2);
    std::cout << "Die Summe lautet:" << sum << std::endl;
    return 0;
    }
    
    int addieren(const int val1, const int val2) {
     return val1+val2;
     }