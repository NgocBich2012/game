#include "Menu.h"

#define GoToxy public_function.gotoxy
#define ChangeColor public_function.textColorString

Menu::Menu()
{
    index_menu_main_ = 1;
    key_ = '\0';
    index_setting_ = 0;
}

Menu::~Menu()
{
    //dtor
}

void Menu::snake2018(){
    int i;
    PublicFunction public_function;
    GoToxy(35,3);
    ChangeColor(" %%%%%%  %%%     %%       %%%       %%     %% %% %%% %%",12);
    GoToxy(35,4);
    ChangeColor("%%    %% %%%%    %%      %%%%%      %%   %%   %%",12);
    GoToxy(35,5);
    ChangeColor("%%       %% %%   %%     %%   %%     %% %%     %%",12);
    GoToxy(35,6);
    ChangeColor(" %%%%%%  %%  %%  %%    %%     %%    %%%%      %% %%% %%",13);
    GoToxy(35,7);
    ChangeColor("      %% %%   %% %%   %%%%% %%%%%   %%  %%    %%",13);
    GoToxy(35,8);
    ChangeColor("%%    %% %%    %%%%  %%         %%  %%   %%   %%",13);
    GoToxy(35,9);
    ChangeColor(" %%%%%%  %%     %%% %%           %% %%     %% %% %%% %%",11);
    GoToxy(43,12);
    ChangeColor(" %%%%%%   %% %% %%    %%%%     %%% %%%",11);
    GoToxy(43,13);
    ChangeColor("%%    %% %%      %% %%  %%    %%     %%",11);
    GoToxy(43,14);
    ChangeColor("      %% %%      %%     %%    %%     %%",10);
    GoToxy(43,15);
    ChangeColor(" %%%%%%  %%      %%     %%     %%% %%%",10);
    GoToxy(43,16);
    ChangeColor("%%       %%      %%     %%    %%     %%",10);
    GoToxy(43,17);
    ChangeColor("%%    %% %%      %%     %%    %%     %%",14);
    GoToxy(43,18);
    ChangeColor(" %%%%%%   %% %% %%   %%%%%%%%  %%% %%%",14);

    while(1){
        if (kbhit()){
            break;
        }
        GoToxy(50,22);
        ChangeColor("Nhan mot phim bat ki !!",i);
        i = i + 1;
        if (i > 15)
            i = 10;
        Sleep(700);
        GoToxy(50,22);
        std::cout << "                       ";
        Sleep(400);
    }
}

void Menu::imageSnake()
{
    system("cls");
    PublicFunction public_function;
    GoToxy(45,1);
    ChangeColor("### #   #     #     #   # # ###",9);
    GoToxy(45,2);
    ChangeColor("#   ##  #    # #    #  #  #",14);
    GoToxy(45,3);
    ChangeColor("### # # #   #####   ###   ### #",14);
    GoToxy(45,4);
    ChangeColor("  # #  ##  #     #  #  #  #",12);
    GoToxy(45,5);
    ChangeColor("### #   # #       # #   # # ###",9);
    GoToxy(50,6);
    ChangeColor("#### ####  ##   ####",12);
    GoToxy(50,7);
    ChangeColor("   # #  # # #   #  #",10);
    GoToxy(50,8);
    ChangeColor("#### #  #   #   ####",13);
    GoToxy(50,9);
    ChangeColor("#    #  #   #   #  #",10);
    GoToxy(50,10);
    ChangeColor("#### #### ##### ####",13);
}

void Menu::menuMain()
{
    imageSnake();
    PublicFunction public_function;
    bool is_while = true;
    while(is_while){

        GoToxy(48,12);
        ChangeColor("========================",10);
        GoToxy(48,13);
        ChangeColor(">>>    Start Game    <<<",10);
        GoToxy(48,14);
        ChangeColor("========================",10);

        GoToxy(48,16);
        ChangeColor("========================",10);
        GoToxy(48,17);
        ChangeColor(">>>      Setting     <<<",10);
        GoToxy(48,18);
        ChangeColor("========================",10);

        GoToxy(48,20);
        ChangeColor("========================",10);
        GoToxy(48,21);
        ChangeColor(">>>     Quit Game    <<<",10);
        GoToxy(48,22);
        ChangeColor("========================",10);

        if (index_menu_main_ == 1){
            GoToxy(48,12);
            ChangeColor("========================",12);
            GoToxy(48,13);
            ChangeColor(">>>    Start Game    <<<",11);
            GoToxy(48,14);
            ChangeColor("========================",12);
        }

        if (index_menu_main_ == 2){
            GoToxy(48,16);
            ChangeColor("========================",12);
            GoToxy(48,17);
            ChangeColor(">>>      Setting     <<<",11);
            GoToxy(48,18);
            ChangeColor("========================",12);
        }

        if (index_menu_main_ == 3){
            GoToxy(48,20);
            ChangeColor("========================",12);
            GoToxy(48,21);
            ChangeColor(">>>     Quit Game    <<<",11);
            GoToxy(48,22);
            ChangeColor("========================",12);
        }

        // Dieu khien Menu chinh
        key_ =_getch();
        if (key_ == 72 && index_menu_main_ > 1){ // up
            index_menu_main_ = index_menu_main_ - 1;
        }
        if (key_ == 80 && index_menu_main_ < 3){ // down
            index_menu_main_ = index_menu_main_ + 1;
        }
        if (key_ == 13){ // Enter
            break;
        }
    }
}

void Menu::setting()
{
    imageSnake();
    PublicFunction public_function;
    bool is_while = true;
    while(is_while){

        GoToxy(48,12);
        ChangeColor("========================",10);
        GoToxy(48,13);
        ChangeColor(">>>   Setting Snake  <<<",10);
        GoToxy(48,14);
        ChangeColor("========================",10);

        GoToxy(48,16);
        ChangeColor("========================",10);
        GoToxy(48,17);
        ChangeColor(">>>   Setting Frame  <<<",10);
        GoToxy(48,18);
        ChangeColor("========================",10);

        GoToxy(48,20);
        ChangeColor("========================",10);
        GoToxy(48,21);
        ChangeColor(">>>   Setting Food   <<<",10);
        GoToxy(48,22);
        ChangeColor("========================",10);

        GoToxy(48,24);
        ChangeColor("========================",10);
        GoToxy(48,25);
        ChangeColor(">>>       Back       <<<",10);
        GoToxy(48,26);
        ChangeColor("========================",10);


        if (index_setting_ == 1){
            GoToxy(48,12);
            ChangeColor("========================",12);
            GoToxy(48,13);
            ChangeColor(">>>   Setting Snake  <<<",11);
            GoToxy(48,14);
            ChangeColor("========================",12);
        }

        if (index_setting_ == 2){
            GoToxy(48,16);
            ChangeColor("========================",12);
            GoToxy(48,17);
            ChangeColor(">>>   Setting Frame  <<<",11);
            GoToxy(48,18);
            ChangeColor("========================",12);
        }

        if (index_setting_  == 3){
            GoToxy(48,20);
            ChangeColor("========================",12);
            GoToxy(48,21);
            ChangeColor(">>>   Setting Food   <<<",11);
            GoToxy(48,22);
            ChangeColor("========================",12);
        }

        if (index_setting_ == 4){
            GoToxy(48,24);
            ChangeColor("========================",12);
            GoToxy(48,25);
            ChangeColor(">>>       Back       <<<",11);
            GoToxy(48,26);
            ChangeColor("========================",12);
        }
        key_ =_getch();
        if (key_ == 72 && index_setting_ > 1){ // up
            index_setting_ = index_setting_ - 1;
        }
        if (key_ == 80 && index_setting_ < 4){ // down
            index_setting_ = index_setting_ + 1;
        }
        if (key_ == 13){ // Enter
            break;
        }
    }
}



































