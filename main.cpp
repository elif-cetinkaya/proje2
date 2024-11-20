#include <iostream>  
#include "student.h"  
#include "teacher.h"  

int main() {  
    Student student("Seydi", 20, "S001");  
    Teacher teacher("Elif", 30, "Matematik");  
    
    std::cout << "Student Information:" << std::endl;  
    student.display_info();  

    std::cout << "\nTeacher Information:" << std::endl;  
    teacher.display_info();  

    return 0;  
}