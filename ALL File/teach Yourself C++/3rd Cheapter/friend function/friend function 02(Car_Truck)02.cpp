#include <iostream>
using namespace std;
class truck;
class car
{
    int speed,passenger;

public:

    car(int a,int b) {  speed = a,passenger = b; }

    friend int grt_spreed(car c,truck t);
};

class truck
{
    int speed,weight;

public :

    truck(int a,int b) { speed = a,weight = b; }

    friend int grt_spreed(car c,truck t);
};

int grt_spreed(car c,truck t)
{
    return c.speed - t.speed;
}

int main()
{
    car c1(55,5),c2(77,9);

    truck t1(55,255),t2(120,325);

    int tp = grt_spreed(c1,t1);

    if(tp > 0) cout << "car is faster." << endl;

    else if(tp == 0) cout  << "same speed." << endl;

    else cout << "truck is faster." << endl;



    int tp1 = grt_spreed(c2,t2);

    if(tp1 > 0) cout << "car is faster." << endl;

    else if(tp1 == 0) cout  << "same speed." << endl;

    else cout << "truck is faster." << endl;

    return 0;
}
