#include <iostream>
using namespace std;

class clsParson{

  struct Info{
    string FullName = "Mahmoud Mohamed Mahmoud";
    int Age = 25;
    string Email = "mahmoudmohamed111126@gmail.com";
    string Address = "KSA, Taif";
    string PhoneNumber = "0573519727";

  };

  Info data;
public:
  void displayInfo() {
    cout << "   Full Name : " << data.FullName << endl;
    cout << "         Age : " << data.Age << endl;
    cout << "       Email : " << data.Email << endl;
    cout << "     Address : " << data.Address << endl;
    cout << "Phone Number : " << data.PhoneNumber << endl;
  }
};

int main() {
    clsParson person;
    person.displayInfo();
    return 0;
}
