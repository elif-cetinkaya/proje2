#include "teacher.h"  
#include <iostream>  

Teacher::Teacher(std::string n, int a, std::string s) : Person(n, a), subject(s) {}  

void Teacher::display_info() {  
    Person::display_info();  
    std::cout << "Subject: " << subject << std::endl;  
}