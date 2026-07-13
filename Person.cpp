#include "Person.h"

Person::Person(string n, string c, int a, string addr) {
    name = n;
    cnic = c;
    age = a;
    address = addr;
}

string Person::getName()    { return name; }
string Person::getCNIC()    { return cnic; }
int    Person::getAge()     { return age; }
string Person::getAddress() { return address; }

Person::~Person() {}
