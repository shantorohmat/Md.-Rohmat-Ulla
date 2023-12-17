#include <iostream>
#include<windows.h>
using namespace std;

class Animation{
    void gotoxy(int x, int y)
    {
        COORD c = { x, y };
        SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
    }
public:
    void animate()
    {
        for(int i = 0; i < 20; i++){
            gotoxy(i, 0);
            draw();
            Sleep(100);
            gotoxy(i,0);
            cout << "                                                                                    ";
        }
    }
   virtual void draw() = 0;
};
class D: public Animation{
public:
    void draw()
{
    for(int i = 0;i < 50;i++){
    cout << "...                                                                               ****";}
}
};

int main()
{
    D ob;

    ob.animate();

    return 0;


}
