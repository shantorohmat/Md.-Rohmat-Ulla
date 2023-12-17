#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    cout << "Which number do you want to find" << endl;
    int key;
    cin >> key;
}