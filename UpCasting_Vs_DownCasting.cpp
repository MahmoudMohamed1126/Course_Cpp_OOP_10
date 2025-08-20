//* ------------------------------ UpCasting Vs DownCasting ------------------------------

#include <iostream>
using namespace std;
class cls_Person {
public:
  string fullName = "Mahmoud Mohamed";
};

class cls_Employee : public cls_Person {
public:
  string title = "Software Engineer";

};

int main() {

  cls_Employee Employee1;

  cout << Employee1.fullName << endl; // Accessing base class member


  // -------------------- UpCasting -------------------------------- //
   //* You Cannot Convert Employee to Person Because Employee > Person
  cls_Person* personPtr = &Employee1; // Upcasting to base class pointer
  cout << personPtr->fullName << endl; // Accessing base class member

  //---------------------------------------------------------------//

  cls_Person person1;
  cout << person1.fullName << endl; // Accessing base class member

  //! ------------------ DownCasting ----------------------------- //
   //*you Not cannot convert person to employee Because Person < Employee

  //! This will cause a runtime error because person1 is not an instance of cls_Employee
  // cls_Employee* Employee2 = &person1; // Downcasting to derived class pointer

    return 0;
}
