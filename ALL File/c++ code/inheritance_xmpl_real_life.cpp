#include<iostream>
using namespace std;

class vehicle
{
public:
    int no_of_wheels;
    string color;
    int fuel;
    int speed;

    void start()
    {
        cout << "Vehicle is starting" << endl;
    }

    void accelerate()
    {
        cout << "Vehicle is accelerating " << endl;
    }

    void brake()
    {
        cout << "Vehicle is stopped" << endl;
    }
};

class transportation_vehicle:  public vehicle
{
public:

    int no_of_doors;
    int load;

};

class passanger_vehicle:  public vehicle
{
public:

     int passanger_seat;

};

class van : public transportation_vehicle
{
public:

    int no_of_boxes;

};

class bike : public passanger_vehicle
{
public:
    int a;



};

class car:  public passanger_vehicle
{
public:

    int passanger_seat;
    int no_of_doors;
};

class truck:  public transportation_vehicle
{
public:


    int size_of_container;
};


int main()
{
    car ob;


    ob.no_of_wheels = 10;
    ob.no_of_doors = 10;
    ob.passanger_seat = 10;
    ob.color = "red";
    ob.fuel = 10;
    ob.speed = 100;

    cout << "car" ;
    cout << endl << endl;

    ob.start();
    ob.accelerate();
    ob.brake();

    cout << "No Of Wheels : " <<ob.no_of_wheels <<endl;
    cout << "NO Of doors : " << ob.no_of_doors << endl;
    cout << "passanger seat : " << ob.passanger_seat << endl;
    cout << "color : " << ob.color << endl;
    cout << "fuel : " << ob.fuel << endl;
    cout << "speed : " << ob.speed << endl;

    bike oc;


    oc.no_of_wheels = 10;
    oc.passanger_seat = 10;
    oc.color = "red";
    oc.fuel = 10;
    oc.speed = 100;

    cout << endl << endl;
    cout << "Bike: ";
    cout << endl << endl;

    oc.start();
    oc.accelerate();
    oc.brake();
    cout << "No Of Wheels : " <<oc.no_of_wheels <<endl;
    cout << "passanger seat : " << oc.passanger_seat << endl;
    cout << "color : " << oc.color << endl;
    cout << "fuel : " << oc.fuel << endl;
    cout << "speed : " << oc.speed << endl;

    truck od;



    od.no_of_wheels = 10;
    od.no_of_doors = 10;
    od.color = "red";
    od.fuel = 10;
    od.speed = 100;
    od.load = 1000;
    od.size_of_container = 100;

    cout << endl << endl;
    cout << "Truck : " << endl;
    cout << endl << endl;

    od.start();
    od.accelerate();
    od.brake();
    cout << "No Of Wheels : " <<od.no_of_wheels <<endl;
    cout << "NO Of doors : " << od.no_of_doors << endl;
    cout << "color : " << od.color << endl;
    cout << "fuel : " << od.fuel << endl;
    cout << "speed : " << od.speed << endl;
    cout << "load : " << od.load << endl;
    cout << "size of container : " << od.size_of_container <<endl;

    van  op;


    op.no_of_wheels = 10;
    op.no_of_doors = 10;
    op.no_of_boxes = 10;
    op.color = "red";
    op.fuel = 10;
    op.speed = 100;
    op.load = 1000;

    cout << endl << endl;
    cout << "Van" << endl;
    cout << endl << endl;

    op.start();
    op.accelerate();
    op.brake();
    cout << "No Of Wheels : " <<op.no_of_wheels <<endl;
    cout << "NO Of doors : " << op.no_of_doors << endl;
    cout << "No Of boxes : " << op.no_of_boxes << endl;
    cout << "color : " << op.color << endl;
    cout << "fuel : " << op.fuel << endl;
    cout << "speed : " << op.speed << endl;
    cout << "load : " << op.load << endl;

}
