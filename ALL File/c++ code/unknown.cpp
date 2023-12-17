#include<iostream>
using namespace std;

class truck;
class car{
int speed;
public:
    car(int x)
    {
        speed = x;
    }
 int sp_greater(truck t);

};


class truck
{
    int speed;
public:
    truck(int x)
    {
        speed = x;
    }
    friend int car ::  sp_greater(truck t);
};
 int car :: sp_greater(truck t)
    {
        return speed  - t.speed;
    }

int main()
{

    car c1(100);
    truck t1(200);

    int t = c1.sp_greater(t1);

    if(0 < t) { cout << "car is fast" << endl;}
    else if(t == 0) { cout << "car & truck speed are same" << endl; }
    else  {cout << "truck is past" << endl;}



}
