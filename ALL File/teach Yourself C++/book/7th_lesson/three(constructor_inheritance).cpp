#include <iostream>
using namespace std;

class Base
{
public:

    Base() {cout << "constructor of base class" << endl; }
    ~Base() { cout << "destructor of base class" << endl;  }

};
class Derrived : public Base
{
public:

    Derrived(){ cout << "constructor of derrived class" << endl; }
    ~Derrived() {cout << "Destructor of derrived class"  << endl; }
};

int main()
{
    Derrived on;
    return 0;

}
