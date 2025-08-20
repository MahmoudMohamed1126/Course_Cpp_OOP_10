#include <iostream>
using namespace std;

class ClsCalulator {
private:
  int _FirstNumber;
  string _Operation;
  int _Result;

public:
  void PrintResult() {
    cout << "Operation After " << _Operation << "  " << _FirstNumber << " is : " << _Result << endl;
    _FirstNumber = _Result; // Update the first number to the result of the last operation
  };
  // Constructor to initialize the first number
  int add(int Number) {
    _Operation = "Adding";
    _Result = _FirstNumber + Number;
    return _Result;
  }

  int subtract(int Number) {
    _Operation = "Subtracting";
    _Result = _FirstNumber - Number;
    return _Result;
  }

  int multiply(int Number) {
    _Operation = "Multiplying";
    _Result = _FirstNumber * Number;
    return _Result;
  }
  // Division function that returns a float
  float divide(int Number) {
    if(Number != 0) {
      _Operation = "Dividing";
      _Result = _FirstNumber / Number;
      return _Result;
    } else {
      _Operation = "Dividing";
      _Result = _FirstNumber / 1;
      return _Result;

    }
  };

  void Clear() {
    _FirstNumber = 0;
    _Operation = "";
    _Result = 0;
  };
};



int main() {


  ClsCalulator calc;
  calc.add(5);
  calc.PrintResult();
  calc.add(5);
  calc.PrintResult();
  calc.add(15);
  calc.PrintResult();
  calc.subtract(5);
  calc.PrintResult();
  calc.multiply(2);
  calc.PrintResult();
  calc.divide(3);

  calc.Clear();
  calc.PrintResult();





  return 0;
}
