#include <iostream>
using namespace std;
int main()
{
    int t,a,b,c,k,p = 0;
    cin >> t;

    while(t--)
    {
        k = 0;
        cin >> a >> b >> c;

        while(1)
        {

        k++;

        if(k % 7 == 0)
        {

             if(a != 0 && b != 0 && c != 0){
            a--;
            b--;
            c--;

        }

        else if(a != 0 && b != 0 && c == 0){
            a--;
            a--;
            b--;

        }

        else if(a != 0 && b == 0 && c != 0){
            a--;
            c--;
            c--;

        }

        else if(a == 0 && b != 0 && c != 0){
            b--;
            b--;
            c--;

        }
        else if(a == 0 && b == 0 && c != 0){

            c--;
            c--;
            c--;

        }
        else if(a != 0 && b == 0 && c == 0){
            a--;
            a--;
            a--;


        }
        else if(a == 0 && b != 0 && c == 0){

            b--;
            b--;
            b--;



        }

            if(a == 0 && b == 0 && c == 0)
            {
                cout << "kk" << endl;
                p = 1;
               break;

            }
        }
        else{

        if(a != 0 && b != 0 && c != 0){
            a--;
            b--;
            c--;
            k = k + 2;

        }

        else if(a != 0 && b != 0 && c == 0){
            a--;
            a--;
            b--;
            k = k + 2;
        }

        else if(a != 0 && b == 0 && c != 0){
            a--;
            c--;
            c--;
            k = k + 2;
        }

        else if(a == 0 && b != 0 && c != 0){
            b--;
            b--;
            c--;
            k = k + 2;
        }
        else if(a == 0 && b == 0 && c != 0){

            c--;
            c--;
            c--;
            k = k + 2;
        }
        else if(a != 0 && b == 0 && c == 0){
            a--;
            a--;
            a--;
            k = k + 2;


        }
        else if(a == 0 && b != 0 && c == 0){

            b--;
            b--;
            b--;
            k = k + 2;

        }
        else if(a == 0 && b == 0 && c == 0){

           break;
        }
        }
        }

        if(p == 1) cout << "Yes" << endl;
        else cout << "no" << endl;
    }
}
