#include <iostream>

using namespace std;


class cls_Person {
  public:
  // Virtual functions allow derived classes to override the base class function
  virtual void Print (){
    cout << " Hi , I'm a Person" << endl;
  }
};

class cls_Student : public cls_Person {
  public:

  void Print () {
    cout << " Hi , I'm a Student" << endl;
  }

};

class cls_Employee : public cls_Person {
  public:

  void Print () {
    cout << " Hi , I'm an Employee" << endl;
  }

};


int main (){

  cls_Employee employee1 ;
  cls_Student student1 ;

  // employee1.Print();
  // student1.Print();

  //---------------------- Virtual Functions ----------------- //

    cls_Person *person1 = new cls_Employee();
    cls_Person *person2 = new cls_Student();

    person1->Print();
    person2->Print();




 return 0;
}
