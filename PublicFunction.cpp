#include "PublicFunction.h"


PublicFunction::PublicFunction()
{
    //ctor
}

PublicFunction::~PublicFunction()
{
    //dtor
}

/*
*Input : mot ki tu char , chi so mau x
*Output : doi mau ki tu char thanh mau x
*/
void PublicFunction::textColorChar(char c,int x)
{
    HANDLE mau;
    mau = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
    std::cout << c;
    SetConsoleTextAttribute(mau, 7);
}
/*
*Input : Mot chuoi ki tu str kieu string , chi so mau x
*Output : doi mau chuoi str thanh mau x
*/
void PublicFunction::textColorString(std::string str,int x)
{
    HANDLE mau;
    mau = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
    std::cout << str;
    SetConsoleTextAttribute(mau, 7);
}
/*
*Input : toa do x , toa do y
*Output : nhay den toa do (x;y)
*/
void PublicFunction::gotoxy(short int x,short int y)
{
    static HANDLE h = NULL;
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h,c);
}
/*
*Input : chi so dau first , chi so cuoi last
*Output : tra ve mot gia tri random tu first den last
*/
int PublicFunction::randomNumber(const int& first , const int& last)
{
    srand(time(NULL));
    return first + rand()% (last - first + 1);
}
