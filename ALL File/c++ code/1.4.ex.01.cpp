#include<iostream>
using namespace std;

int main()
{

    int x,t,i;

    cin >> t ;

    for(i = 1; i <= t; i++){

    cin >> x;

    if(x%2 == 0){
    cout << "the number of " << x << " is  Even " << endl;

    }
    else{
    cout << "the number of " << x << "  is odd "  << endl;
    }
    }

    return 0;


}
