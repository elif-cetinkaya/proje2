#ifndef PERSON_H  
#define PERSON_H  

#include <string>  

class Person {  
protected:  
    std::string name;  
    int age;  

public:  
    Person(std::string n, int a);  
    virtual void display_info();  // Sanal metod  
};  

#endif // PERSON_H