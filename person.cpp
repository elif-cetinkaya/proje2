#include "person.h"  
#include <iostream>  

Person::Person(std::string n, int a) : name(n), age(a) {}  

void Person::display_info() {  
    std::cout << "Name: " << name << ", Age: " << age << std::endl;  
}