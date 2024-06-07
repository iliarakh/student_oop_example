#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
    
    Student(float gpa);

    
    float GPA() const;

private:
    float m_gpa;  
};

#endif  
