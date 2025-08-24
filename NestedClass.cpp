#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
public:
  class Address
  {

  private:
    string _street;
    string _city;
    string _country;

  public:
    void SetFullAddress()
    {
      cout << "Please Enter Your Address Details:" << endl;
      cout << "----------------------------------" << endl;
      cout << "Street: ";
      getline(cin, _street);
      cout << "City: ";
      getline(cin, _city);
      cout << "Country: ";
      getline(cin, _country);
    }

    void Print()
    {
      cout << "----------------------------------" << endl;
      cout << "Address Details:" << endl;
      cout << "     Street: " << _street << endl;
      cout << "       City: " << _city << endl;
      cout << "    Country: " << _country << endl;
      cout << "----------------------------------" << endl;
    }
  };
};

int main()
{
  clsPerson::Address address;
  address.SetFullAddress();
  address.Print();

  return 0;
}
