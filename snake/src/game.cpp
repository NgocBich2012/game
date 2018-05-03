#include "game.h"

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h,c);
}
void bang()
{
    char c = 219;
    //textcolor(12);
    for(int i = 1 ; i < 27 ; i++)
    {
        textcolor(11);
        gotoxy(1,i);
        cout << c;
        gotoxy(98,i);
        cout << c;
        gotoxy(79,i);
        cout << c;
    }
    for(int i = 1 ; i < 99 ; i++)
    {
        textcolor(11);
        gotoxy(i,1);
        cout << c;
        gotoxy(i,27);
        cout << c;
    }
    textcolor(7);
    gotoxy(81,2);
    cout << "Diem So : ";
}
void textcolor(int x)
{
    HANDLE mau;
    mau = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
}
