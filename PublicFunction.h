#ifndef PUBLICFUNCTION_H
#define PUBLICFUNCTION_H
#include <time.h>
#include <iostream>
#include <string>
#include <windows.h>


class PublicFunction
{
    public:
        PublicFunction();
        ~PublicFunction();
        void textColorChar(char c,int x); // màu cho kí tự
        void textColorString(std::string str,int x); // màu cho chuỗi
        void gotoxy(short int x,short int y); // hàm goto đến tọa độ
        int randomNumber(const int& first , const int& last); // hàm random số

    private:
};

#endif // PUBLICFUNCTION_H
