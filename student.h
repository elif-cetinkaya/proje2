#ifndef STUDENT_H  
#define STUDENT_H  

#include "person.h"  

class Student : public Person {  
private:  
    std::string student_id;  

public:  
    Student(std::string n, int a, std::string id);  
    void display_info() override;  // Override edilmiş metod  
};  

#endif // STUDENT_H