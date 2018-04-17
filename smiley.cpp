#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<time.h>
using namespace std;

int myRandomX() {
    srand(time(NULL));
    int randomNumber;
    randomNumber = rand()%700;
    return randomNumber;
}

int myRandomY() {
    srand(time(NULL));
    int randomNumber;
    randomNumber = rand()%500;
    return randomNumber;
}



void drawSmile(int x,int y) {
// Face Circle
    setcolor(YELLOW);
    circle(x, y, 50);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(x, y, YELLOW);

    // Left Eye
    setcolor(BLACK);
    circle(x-20, y-15, 7);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x-20, y-15, BLACK);

    // Right Eye
    setcolor(BLACK);
    circle(x+20, y-15,7);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x+20, y-15, BLACK);

    // Smile
    setcolor(BLACK);
    line(x-25,y+24,x+25,y+24);
    line(x-25,y+25,x+25,y+25);
    line(x-25,y+26,x+25,y+26);
}


int main() {

    initwindow(800,600);
    int randomNumberX;
    int randomNumberY;


    while(1) {
        srand(time(NULL));
        randomNumberX = rand()%700;
        randomNumberY = rand()%500;

        if (randomNumberX < 100) {
            randomNumberX += 100;
        }

        if (randomNumberY < 100) {
            randomNumberY += 100;
        }

        cout << "randomX" << randomNumberX;

        cout << "randomY" << randomNumberY;
        drawSmile(randomNumberX,randomNumberY);
        delay(1000);
        cleardevice();
    }
    getch();
    closegraph();
}
