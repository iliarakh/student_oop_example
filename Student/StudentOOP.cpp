#include "StudentOOP.hpp"

Student::Student(float gpa) : m_gpa(gpa) {}

float Student::GPA() const {
    
    return m_gpa;
}
