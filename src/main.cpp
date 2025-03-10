#include <iostream>
#include <string>

// Create a student example class
class Student {
public:
  // Constructor
  Student(std::string name, int age) {
    this->name = name;
    this->age = age;
  }

  // Destructor
  ~Student() {
    std::cout << "Destructor called for " << this->name << std::endl;
  }

  // Member function
  void printInfo() {
    std::cout << "Name: " << this->name << ", Age: " << this->age << std::endl;
  }

private:
  std::string name;
  int age;
};

int main() {
  // Create a student object
  Student student1("John", 21);

  if (true) {
    // Create a student object
    Student student2("Jane", 22);
  }

  // Call the member function
  student1.printInfo();

  return 0;
}
