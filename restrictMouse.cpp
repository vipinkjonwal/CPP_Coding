#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;

int main() {
    initwindow(800,600);
    POINT pt;
    int tempX;
    int tempY;
    int mx = 400;
    int my = 300;
    int radius = 150;

    circle(mx,my,radius);
    pt.x = tempX = mx;
    pt.y = tempY = my;

    while(!kbhit()) {
            GetCursorPos(&pt);
            if((pow(pt.x - mx - 2,2) + pow(pt.y - my - 25,2) - pow(radius,2)) > 0) {
                SetCursorPos(tempX,tempY);
                pt.x = tempX;
                pt.y = tempY;
            }
            tempX = pt.x;
            tempY = pt.y;
    };
    getch();
    closegraph();
    return 0;
}
