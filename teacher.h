#ifndef TEACHER_H  
#define TEACHER_H  

#include "person.h"  

class Teacher : public Person {  
private:  
    std::string subject;  

public:  
    Teacher(std::string n, int a, std::string s);  
    void display_info() override;  // Override edilmiş metod  
};  

#endif // TEACHER_H