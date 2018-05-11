#ifndef MENU_H
#define MENU_H
#include <windows.h>
#include <conio.h>
#include "time.h"
#include "PublicFunction.h"
#include "Snake.h"
#include "Node.h"




class Menu
{
    public:
        Menu();
        ~Menu();
        void setMenuMain(const int &index) {index_menu_main_ = index;}
        int getMenuMain() const {return index_menu_main_;}

        void setIndexSetting(const int &index) {index_setting_ = index;}
        int getIndexSetting() const {return index_setting_;}

        void snake2018();
        void imageSnake();
        void menuMain();

        void setting();

    private:
        int index_menu_main_;
        int index_setting_;
        char key_;
};

#endif // MENU_H
