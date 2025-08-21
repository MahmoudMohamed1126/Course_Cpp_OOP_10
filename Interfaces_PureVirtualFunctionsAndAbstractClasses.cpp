#include <iostream>
using namespace std;

//Abstract Class / Interface / Contract.
class clsMobile {
    virtual void Dial(string PhoneNumber) = 0;
    virtual void SendSMS(string PhoneNumber, string Text) = 0;
    virtual void TakePicture() = 0;
};


/*This class signed a contract with clsMobile abstract class
 therefore it should implement everything in the abstract class*/
class clsSmartphone : public clsMobile {

  public:
    void Dial(string PhoneNumber) {
        cout << "Dialing " << PhoneNumber << " from smartphone." << endl;
    }

    void SendSMS(string PhoneNumber, string Text)  {
        cout << "Sending SMS to " << PhoneNumber << ": " << Text << endl;
    }

    void TakePicture() {
        cout << "Taking a picture with smartphone." << endl;
    }

};


int main() {
    clsSmartphone myPhone;

    myPhone.Dial("123-456-7890");
    myPhone.SendSMS("123-456-7890", "Hello!");
    myPhone.TakePicture();

    return 0;
}
