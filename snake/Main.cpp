#include<stdlib.h>
#include<iostream>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include "game.h"

using namespace std;
struct snake
{
    int toaDox;
    int toaDoy;
};
int toaDo(struct snake &snake1, struct snake &snake2);
struct foodSnake
{
    int foodx;
    int foody;
};
int randomFood(struct foodSnake &foodSnake1);
void displaySnake(int number, struct snake *snakeBich );
int main()
{
start :
    int number = 3;
    int diemSnake = 0;
    struct snake *snakeBich = new snake  ;
    snakeBich[0].toaDox=4;
    snakeBich[0].toaDoy=3;
    snakeBich[1].toaDox=3;
    snakeBich[1].toaDoy=3;
    snakeBich[2].toaDox=2;
    snakeBich[2].toaDoy=3;
    foodSnake foodSnakeBich;
    char keyChar = 77 ;
    char keyCheck = 77 ;
    randomFood(foodSnakeBich);
    gotoxy(foodSnakeBich.foodx,foodSnakeBich.foody);
    cout << "*";
    bang();
    while((snakeBich[0].toaDox != 1 )&& (snakeBich[0].toaDox != 78 )&&( snakeBich[0].toaDoy != 1 )&& (snakeBich[0].toaDoy != 27))
    {
        for(int i = 1 ; i < number  ; i++ )
        {
            if((snakeBich[0].toaDox == snakeBich[i].toaDox)&&(snakeBich[0].toaDoy == snakeBich[i].toaDoy))
            {
                goto game;
            }
        }
        if (kbhit())
        {
            keyChar = getch();
            if((keyChar == 77 && keyCheck == 75)
                    ||(keyChar == 75 && keyCheck == 77)
                    ||(keyChar == 72 && keyCheck == 80)
                    ||(keyChar == 80 && keyCheck == 72)
                    ||(keyChar != 75 && keyChar != 72 && keyChar != 77 && keyChar != 80))
            {
                keyChar = keyCheck;
            }
        }
        displaySnake(number,snakeBich);
        Sleep(100);
        gotoxy(snakeBich[number -1].toaDox,snakeBich[number -1].toaDoy);
        cout << " ";
        for(int i = number -1 ; i > 0 ; i--)
        {
            toaDo(snakeBich[i],snakeBich[i-1]);

        }
        if( keyChar == 77)
        {
            snakeBich[0].toaDox++;
            gotoxy(snakeBich[0].toaDox-1,snakeBich[0].toaDoy);
            cout << " ";
        }
        if( keyChar == 80)
        {
            snakeBich[0].toaDoy++;
            gotoxy(snakeBich[0].toaDox,snakeBich[0].toaDoy-1);
            cout << " ";
        }
        if( keyChar == 75)
        {
            snakeBich[0].toaDox--;
            gotoxy(snakeBich[0].toaDox+1,snakeBich[0].toaDoy);
            cout << " ";
        }
        if( keyChar == 72)
        {
            snakeBich[0].toaDoy--;
            gotoxy(snakeBich[0].toaDox,snakeBich[0].toaDoy+1);
            cout <<" ";
        }
        keyCheck = keyChar;
        if((snakeBich[0].toaDox == foodSnakeBich.foodx)&&(snakeBich[0].toaDoy == foodSnakeBich.foody))
        {
            randomFood(foodSnakeBich);
            gotoxy(foodSnakeBich.foodx,foodSnakeBich.foody);
            cout << "*";
            number++;
            diemSnake++;
            gotoxy(90,2);
            cout << diemSnake;
            snakeBich[number - 1].toaDox = 0;
            snakeBich[number - 1].toaDoy = 0;
        }
    }
game :
    gotoxy(30,15);
    cout << "GAME OVER" << endl;
    gotoxy(20,16);
    cout << "Ban co muon choi tiep khong (y/n)";
bich :
    keyChar = getch();
    if(keyChar == 'y')
    {
        system("cls");
        goto start;
    }
    if( keyChar == 'n')
    {
        return 0;
    }
    else
        goto bich;
    delete snakeBich;
}
void displaySnake(int number,struct snake *snakeBich)
{
    for(int i = number -1 ; i >= 0 ; i--)
    {
        gotoxy(snakeBich[i].toaDox,snakeBich[i].toaDoy);
        textcolor(12);
        cout << "O" ;
    }
    textcolor(7);
}
int toaDo(struct snake &snake1, struct snake &snake2)
{
    snake1.toaDox = snake2.toaDox;
    snake1.toaDoy = snake2.toaDoy;
}
int randomFood(struct foodSnake &foodSnake1)
{
    srand(time(0));
    foodSnake1.foodx = 2 + rand()% 77;
    foodSnake1.foody = 2 + rand()% 25;
    //srand(time(0));
}
