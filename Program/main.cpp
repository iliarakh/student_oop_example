#include <iostream> 
#include "StudentOOP.hpp" 

int main()

{ Student student(3.5); 

std::cout << "The student's GPA is: " << student.GPA() << std::endl; 

return 0; 

}