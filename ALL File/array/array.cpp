#include<iostream>
using namespace std;

int main()
{
    int F_semester[10] = {10,20,30,40,50,60,70,80,90,100};

    int S_semester[10] = {10,20,30,40,50,60,70,80,90,100};

    int T_semester[10] = {10,20,30,40,50,60,70,80,90,100};

    int final_semester[10];


    for(int i = 0;i < 10;i++)
    {
        final_semester[i] = F_semester[i]/4.0 + S_semester[i]/4.0 + T_semester[i]/2.0;
    }
    for(int i = 0; i < 10;i++)
    {
        cout <<"Roll No : " <<  i+1 << '\t' << "Marks : " << final_semester[i] << endl;
    }
    for(int marks = 10; marks <= 100;marks++)
    {
        int count = 0;

        for(int i = 0;i < 10;i++){

                if(final_semester[i] == marks)

                count++;

        }
            cout << "Marks : " << marks << '\t' << "Count : "   << count << endl;

    }

    return 0;
}
