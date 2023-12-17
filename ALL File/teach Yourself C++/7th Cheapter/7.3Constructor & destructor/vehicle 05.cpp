#include<iostream>
using namespace std;

class vehicle
{
public:
    int speed;

    string madel,colour;

    int fuel;
};
class car : public vehicle
{
public:
    int NOP;

    int NOD;
};
class bus : public vehicle
{
public:
    int NOS;

    int NOW;
};



int main()
{
    bus ob;

    ob.colour = "RED";
    ob.NOS = 50;
    ob.NOW = 20;
    ob.speed = 120;

    cout <<"BUS:"<<endl<<endl;
    cout << "COLOUR: " << ob.colour <<endl;
    cout << "SEAT: " << ob.NOS <<endl;
    cout << "WINDOW: " << ob.NOW <<endl;
    cout << "SPEED: " << ob.speed <<endl;

    car oc;

    oc.colour = "BLACK";
    oc.NOD = 5;
    oc.NOP = 3;
    oc.speed = 200;


    cout <<"CAR:"<<endl<<endl;

    cout << "COLOUR: " << oc.colour <<endl;
    cout << "DORE: " << oc.NOD <<endl;
    cout << "PESSENGERE: " << oc.NOP <<endl;
    cout << "SPEED: " << oc.speed <<endl;

    return 0;


}
