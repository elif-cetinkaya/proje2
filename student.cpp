#include "student.h"  
#include <iostream>  

Student::Student(std::string n, int a, std::string id) : Person(n, a), student_id(id) {}  

void Student::display_info() {  
    Person::display_info();  
    std::cout << "Student ID: " << student_id << std::endl;  
}