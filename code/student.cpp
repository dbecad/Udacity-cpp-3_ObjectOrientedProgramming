#include <iostream>
#include <string>

// TODO: Define your "Student" class below with constructor
// and getter/setter methods
class Student {
     
     // define private attributes
     private:
         unsigned int grade; // years of study
         float gpa;          // GPA

     public:     
         // write a public constructor for Student
         // that takes name, grade, and GPA
         // and initializes the private attributes
         Student(std::string name, unsigned int grade, float gpa) :
         name(name), grade(grade), gpa(gpa) 
         {             
             if(grade < 1 || grade > 12)
                 throw "Invalid grade";
             if(gpa < 0.0 || gpa > 4.0)
                 throw "Invalid gpa";
         }
         
         std::string name;   // student name
    
         unsigned int Grade() const // getter for years of study
         {
             return grade;
         }
         float GPA() const // getter for student's GPA
         {
             return gpa;
         }

         void Grade(unsigned int grade) // setter for years of study
         {
             Student::grade = grade;
             if(grade < 1 || grade > 12)
                 throw "Invalid grade";
         }
         void GPA(float gpa) // setter for GPA
         {
             Student::gpa = gpa;
             if(gpa < 0.0 || gpa > 4.0)
                 throw "Invalid gpa";
         }
};

int main()
{
    // Test instantiation and getters / setters
    Student david("David", 13, 3.5);
    std::cout << david.name << "\n";
    std::cout << david.Grade() << "\n";
    std::cout << david.GPA() << "\n";
}
