#include<iostream>
using namespace std;
int main()
{
    int t,n,count = 0;
    while(1){

    cin >> t;
     count ++;
    int j = 0,n;

    if(t == 0)
    {
        break;
    }

    for(int i = 1; i <= t;i++)
    {

        cin >> n;

        if(n > 0)
        {

            j++;
        }
        else
        {
            j--;
        }
    }
      cout << "Case"<< " " << count << ": "<< j <<endl;
}
return 0;
}

