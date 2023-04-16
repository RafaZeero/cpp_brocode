#include <iostream>

int main() {

  // integer (whole number)
  int age = 29;
  int year = 2023;
  int days = 7.4;

  // double (number including decimal)
  double price = 5.99;
  double gpa = 2.5;
  double temperature = 25.1;

  // single character
  char grade = 'A';
  char initial = 'R';
  char currency = '$';

  // boolean (true or false)
  bool isStudent = true;
  bool hasPower = false;
  bool forSale = true;

  // string (objects that represents a sequence of text)
  std::string name = "Daniel";
  std::string day = "Saturday";
  std::string food = "Pizza";
  std::string address = "Home 33 Moon St.";

  std::cout << "Henlo"
            << " " << name << '\n';

  std::cout << "I'm " << age << " years old";

  return 0;
}
