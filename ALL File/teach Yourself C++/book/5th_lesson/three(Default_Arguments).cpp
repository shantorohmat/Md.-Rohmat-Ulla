#include <iostream>
using namespace std;

double rec_area(double length,double width )
{
    //if(!width) { width = length; }
    return length * width;
}
double rec_area(double length)
{
    return length * length;
}

int main()
{
    cout <<rec_area(10,5)  << endl << rec_area(4) << endl;

}
