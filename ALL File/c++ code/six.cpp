#include<iostream>
using namespace std;

int main()
{
    double feet,inch;
    do{
    cout <<endl << " Enter the value of feet : ";

    cin >> feet;

    inch = feet * 12;

    cout << "\nthe value of inch:" << inch << endl;


    }while(feet != 0);

    return 0;
}
