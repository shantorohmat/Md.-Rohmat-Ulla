#include<iostream>
#include <string>
using namespace std;

int main()
{
    int s1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20};
    int k;
    for(int i = 0;s1[i] != 20;i++)
    k++;
    cout<< s1[k] << " : " <<k<< endl;
    cout<< s1[0] << " : " <<0<< endl;
    cout << k << endl;

    int low_index = 0;
    int high_index = 20;
    int mid_index;
    int num = 1;

    while(low_index <= high_index)
    {
        mid_index = (low_index + high_index) / 2;

        if(s1[mid_index] > num )
        {
            high_index = mid_index - 1;
        }

        if(s1[mid_index] < num)
        {
            low_index = mid_index + 1;
        }
        if(s1[mid_index] == num)
        {
           // cout << s1[mid_index] << endl;
            break;
        }


    }
    if(low_index > high_index)
    {
        cout << " There is no such number." << endl;
    }
    else{
        cout << s1[mid_index] <<"  is the wanted number. " << endl;
    }
    return 0;



}
