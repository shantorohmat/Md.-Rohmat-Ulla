#include<iostream>
using namespace std;

class truck;

class car
{
    int passengers;

    int speed;

public:

    car(int p,int s){passengers = p; speed = p;}

    int sp_greater(truck t);
};
class truck{

int weight;

int speed;

public:

    truck(int w, int s){weight = w; speed = s; }

    friend int car :: sp_greater(truck t);

};
int car :: sp_greater(truck t)
{
    return speed - t.speed;
}
int main()
{
    int t;

    car c1(6,55),c2(2,120);///passengers,speed

    truck t1(10000,55), t2(20000,72);///weight,speed

    cout << "computer c1 and t1: \n";

    t  = c1.sp_greater(t1);

    if(t < 0) cout << "truck is faster " << endl;

    else if(t == 0) cout << "car and  truck speed is the same " << endl;

    else cout << "Car is faster "<< endl;

    cout << "computer c2 and t2: \n";

    t  = c2.sp_greater(t2);

    if(t < 0) cout << "truck is faster " << endl;

    else if(t == 0) cout << "car and  truck speed is the same " << endl;

    else cout << "Car is faster "<< endl;

    return 0;
}
