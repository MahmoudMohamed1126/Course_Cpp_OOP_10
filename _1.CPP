#include <iostream>
using namespace std;


class Parsson {
  //! The class Parsson has two private member variables: _FirstName and _LastName.
private:
  string _FirstName;
  string _LastName;

  //* The constructor is not explicitly defined, so the default constructor is used.
public:
  string getFirstName() {
    return _FirstName;
  }

  string getLastName() {
    return _LastName;
  }

  void setFirstName(string firstName) {
    _FirstName = firstName;
  }
  void setLastName(string lastName) {
    _LastName = lastName;
  }

};

int main() {


  Parsson person;
  person.setFirstName("John");
  person.setLastName("Doe");

  cout << "Hello, " << person.getFirstName() << " " << person.getLastName() << "!" << endl;
  return 0;
}