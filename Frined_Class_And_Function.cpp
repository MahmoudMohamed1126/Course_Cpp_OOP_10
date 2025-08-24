#include <iostream>
using namespace std;

class Box {
    private:
        int length;

    public:
        Box(int l){
          length = l;
        }

        // Friend function declaration
        friend void printLength(Box b);

        // Friend class declaration
        friend class A;
};

class A{

  public:

    void displayLength(Box b) {

        cout << "Length of box from class A: " << b.length << endl;
    }
};

void printLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box box(10);
    A a;
    a.displayLength(box);

    printLength(box);
    return 0;
}
