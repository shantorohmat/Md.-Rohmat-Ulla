#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[100];
    int a = 0;
    int b = INT_MAX;

     for(int i=0;i<20;i++)
     {
         arr[i]=rand()%100;
         a = max(a,arr[i]);
         b = min(b,arr[i]);



     }
     ;
     cout << "Choice any number in between " << b<< "-" << a << endl;

    int l = 0,x;
    int h = 20-1;
    //int mid ;
    string s;
    while(1){
    cout << "enter the value : ";
    cin >> x;
    int mid;
       while(l <= h)
    {

        mid = floor((l+h)/2);

         if(arr[mid] == x)
        {
             arr[mid];
             cout << "You chose " << arr[mid] << endl;
             cin >> s;
             return 0;


        }

        else if(arr[mid] > x )///24>10
        {

            h = mid -1;
            cout << "You chose " << arr[h] << endl;
            cin >> s;

        }
        else if(arr[mid] < x) ///24 < 34
        {
            l = mid + 1;
            cout << "Your chose "  << arr[l] << endl;
            cin >> s;

        }
        if(s == "nope" )
            cout << "My guess is greater or lower? " << endl;
        cin >> s;
    }
    cout << "There is no such value in the list" << endl;
    }





}
