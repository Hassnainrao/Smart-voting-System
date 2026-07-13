#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

// Base class for all users in the system
class Person {
protected:
    string name;
    int age;
    string cnic;
    string address;
public:
    Person(string n, string c, int a, string addr);
    virtual void getDetails() = 0;
    virtual bool validateAge() = 0;
    string getName();
    string getCNIC();
    int getAge();
    string getAddress();
    virtual ~Person();
};

#endif
